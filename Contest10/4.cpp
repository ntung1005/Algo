#include<bits/stdc++.h>
using namespace std;

int n,m;
string a[n][m];
int iS,jS,iF,jF;

bool check[n][m];

void Try(int i,int j){
	int count;
	if(a[i][j] == "T"){
		cout<<count<<endl;
//		return;
	}
	
	if(j>m || i>n){
		return;
	}
	
	if(a[i+1][j] =="." && check[i+1][j]==false){
		check[i+1][j] = true;
		Try(i+1,j);
		count++;
	}
	if(a[i][j+1] =="." && check[i][j+1]==false){
		check[i][j+1] = true;
		Try(i,j+1);
		count++;
	}
	if(i>0 && a[i-1][j] =="." && check[i-1][j]==false){
		check[i-1][j] = true;
		Try(i+1,j);
		count++;
	}
	if(j>0 && a[i][j-1] =="." && check[i][j-1]==false){
		check[i][j-1] = true;
		Try(i,j-1);
		count++;
	}
	
}
		
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j] == "S"){
					iS = i;
					jS = j;
				}
			}
		}
		
		Try(iS,jS);
		
	}
}
