#include<bits/stdc++.h>
using namespace std;
int C[1005][1005];

// Cung thuat toan : 14

int tinh(string s,int n){
	
	int i,j;
	
	for(i=0;i<=n;i++) C[i][0]=0;
	for(i=0;i<=n;i++) C[0][i]=0;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(s[i-1]==s[j-1] &&i!=j)
				C[i][j]=C[i-1][j-1]+1;
			else
				C[i][j]=max(C[i-1][j],C[i][j-1]);
		}
	}
	
	return C[n][n];
}

int main(){
	int t,n;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		cout<<tinh(s,n)<<endl;
	}
}
