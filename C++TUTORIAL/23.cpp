#include<bits/stdc++.h>
using namespace std;

int n,a[105][105];
bool check[105][105]={false};
vector<string> res;

void quaylui(int i,int j, string s){
	if(i==0 && j==0 && a[i][j]==0){
		return;
	}
	if(i==n-1 && j==n-1 && a[i][j]==0){
		return;
	}
	
	if(i==n-1 && j==n-1 && a[n-1][n-1]){
		res.push_back(s);
		return;
	};
	if(a[i+1][j]==1 && !check[i+1][j]){
		check[i+1][j]=true;
		quaylui(i+1,j,s+"D");
		check[i+1][j]=false;
	}
	if(a[i-1][j]==1 && i>=1 && !check[i-1][j]){
		check[i-1][j]=true;
		quaylui(i-1,j,s+"U");
		check[i-1][j]=false;
	}
	if(a[i][j+1]==1 && !check[i][j+1]){
		check[i][j+1]=true;
		quaylui(i,j+1,s+"R");
		check[i][j+1]=false;
	}
	if(a[i][j-1]==1 && j>=1 && !check[i][j-1]){
		check[i][j-1]=true;
		quaylui(i,j-1,s+"L");
		check[i][j-1]=false;
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
	
	sort(res.begin(),res.end());
	
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	
}
