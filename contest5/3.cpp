#include<bits/stdc++.h>
using namespace std;

int F[40005],n,s,a[205];

int kiemtra(){
	int i,j;
	memset(F,0,sizeof(F));
	F[0]=1;
	for(i=1;i<=n;i++){
		for(j=s;j>=a[i];j--){
			if(F[j]==0 && F[j-a[i]]==1){
				F[j]=1;
			}
			else F[j]=0;
		}
	}
	
	return F[s];
}

int main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(i=1;i<=n;i++) cin>>a[i];
		if(kiemtra()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
