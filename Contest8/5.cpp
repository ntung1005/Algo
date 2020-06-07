#include<bits/stdc++.h>
using namespace std;

long long np(int x){
	vector<int> a;
	while(x>0){
		a.push_back(x%2);
		x/=2;
	}
	
	long long res=0;
	for(int i=a.size()-1;i>=0;i--){
		res=10*res+a[i];
	}
	return res;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<np(i)<<" ";
		}
		cout<<endl;
	}
}
