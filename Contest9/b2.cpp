#include<bits/stdc++.h>
using namespace std;
 
int n,u,v;
int main() {
	cin>>n;
	int a[n][n];
	
	for (int i=1;i<=n;i++){
		cin>> u >> v ;
		a[u][v] =1;
	}
	for(int i=1; i<=n;i++) {
	 
		for(int j=1; j<=n; j++){
			if (a[i][j]==1){
			
			cout<<i<<" "<<j<<endl;
			}
		}
	}
}

