#include<bits/stdc++.h>
using namespace std;

int u,v,nguon;
vector<int> ke[1005];
bool ok[1005];

void DFS(int nguon){
	
	cout<<nguon<<" ";
	ok[nguon] = true;
	
	for(int i=0;i<ke[nguon].size();i++){
		if(ok[ke[nguon][i]]==false){
			DFS(ke[nguon][i]);
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		
		cin>>u>>v>>nguon;
		
		for(int i=0;i<v;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		
		DFS(nguon);
	}
}
