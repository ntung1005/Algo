#include <bits/stdc++.h>
using namespace std;
int n;
int l;
int a[100];
void Try(int k){
	for(int i=0;i<=1;i++){
		a[k]=i;
		if(k==n){
			int dem=0;
			for(int j=1;j<=n;j++)
			if(a[j]==1) dem ++;
		if(dem == l){
			for(int m=1;m<=n;m++)
			cout<< a[m];
		cout<<endl;
		    }
		}
		else Try(k+1);
	}
}
int main(void){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cin>>n>>l;
		Try(1);
}
}
