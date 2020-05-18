#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];

int tinh(string s1,string s2){
	int n=s1.size();
	int m=s2.size();
	
	for(int i=0;i<n;i++){
		C[i][0]=0;
	}
	for(int j=0;j<m;j++){
		C[0][j]=0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i]==s2[j]){
				C[i][j]=C[i-1][j-1]+1;
			}
			else{
				C[i][j]=max(C[i-1][j],C[i][j-1]);
			}
		}
	}
	
	return C[n][m];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<tinh(s1,s2)<<endl;
	}	
}
