#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int a[100][100];
int n;

void Try(int x){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-x+1);j++){
	
			a[x+1][j] = a[x][j]+a[x][j+1];
			cout<<a[x][j]<<' ';
		}
		cout<<endl;
		
		
		if(x==n){
			for(int i=1;i<=n;i++){
				for(int j=1;i<=n-x+1;j++){
					cout<<a[i][j]<<' ';
					break;
				}
				
			}
		}else Try(x+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[1][i];
	
		Try(1);
	}
	return 0;
}
