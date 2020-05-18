#include<bits/stdc++.h>
using namespace std;
int C[105][105][105];

// Cung thuat toan : 14

int tinh(string s1,string s2,string s3,int n,int m,int p){
	
	int i,j,k;
	
	memset(C,0,sizeof(C));
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			
			for(k=1;k<=p;k++){
				if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1])
					C[i][j][k]=C[i-1][j-1][k-1]+1;
				else
					C[i][j][k]=max(C[i-1][j][k],max(C[i][j-1][k],C[i][j][k-1]));
			}
		
		}
	}
	
	return C[n][m][p];
}

int main(){
	int t,n,m,p;
	string s1,s2,s3;
	cin>>t;
	while(t--){
		cin>>n>>m>>p>>s1>>s2>>s3;
		cout<<tinh(s1,s2,s3,n,m,p)<<endl;
	}
}
