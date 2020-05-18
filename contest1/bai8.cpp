#include <bits/stdc++.h>
using namespace std;
int n;
vector< vector<int> > res;
bool Bool[100];
int a[100];
void Try(int k){
    for (int i=1;i<=n;i++){
        if (!Bool[i]){
            a[k]=i;
            Bool[i]=true;
            if (k==n){
            vector<int> A;
                for(int i=1;i<=n;i++)
                A.push_back(a[i]);
            res.push_back(A);
        }else
            Try(k+1);
            Bool[i]=false;
			}
        }
    }
void display(){
	for (int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j];
			cout<<" ";
	}
		cout<< '\n';
}
int main(void){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cin>>n;
		res.clear();
		memset(Bool,false,sizeof(Bool));
		Try(1);
		display();
				
	}
}
