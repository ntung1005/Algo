#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void BFS(int nguon){
	queue<int> q;
	q.push(nguon);
	

	while(!q.empty()){
		int top = q.front();q.pop();
		cout<<top<<" ";
		ok[top]=true;
		
		for(int i=0;i<ke[top].size();i++){
			if(ok[ke[top][i]] == false){
				ok[ke[top][i]]=true;
				q.push(ke[top][i]);
			}
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int u,v,nguon;
		cin>>u>>v>>nguon;
		
		for(int i=0;i<v;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		
		BFS(nguon);
	}
}
