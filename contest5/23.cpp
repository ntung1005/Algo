#include<bits/stdc++.h>
using namespace std;

int tinh(int a[],int n){
	int F[1005],i,j,kq=0;
	for(i=1;i<=n;i++){
		F[i]=1;
		for(j=1;j<i;j++){
			if(a[j]<=a[i]){
				F[i] = max(F[i],F[j]+1);
			}
		}
		kq = max(kq,F[i]);
	}
	
	return n-kq;
}

int main(){
	int t,n,a[1005],i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<=n;i++) cin>>a[i];
		cout<<tinh(a,n)<<endl;
	}
}
