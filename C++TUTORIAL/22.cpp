#include<bits/stdc++.h>
using namespace std;

int n,a[105][105];
vector<string> res;
bool check = false;

void quaylui(int i,int j, string s){
	if(i==0 && j==0 && a[i][j]==0){
//		check = false;
		return;
	}
	if(i==n-1 && j==n-1 && a[i][j]==0){
//		check = false;
		return;
	}
	
	if(i==n-1 && j==n-1 && a[n-1][n-1]){
		res.push_back(s);
//		check = true;
		return;
	};
	if(a[i+1][j]==1){
		quaylui(i+1,j,s+"D");
	}
	if(a[i][j+1]==1){
		quaylui(i,j+1,s+"R");
	}
	if(i<n-1&&j<n-1 && !a[i+1][j] || i>n || j>n){
		return;
	}
	
}

int main(){
	string s;
	
	cin>>n;
	res.clear();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	quaylui(0,0,s);
	
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	
}
