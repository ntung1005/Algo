#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];

void BFS(int u,int v){
	queue<int> q;
	q.push(u);
	while(q.size()>0){
		int top = q.front(); q.pop();
		ok[top] = true;
		if(top==v) return;
		for(int i=0;i<ke[top].size();i++){
			if(!ok[ke[top][i]]){
				ok[ke[top][i]]=true;
				truoc[ke[top][i]] = top;
				q.push(ke[top][i]);	
			}
		}
	}
}

void Trace(int u,int v){
	if(!ok[v]){
		cout<<-1;
		return;
	}
	vector<int> x;
	while(u!=v){
		if(u==0){
			cout<<-1;
			return ;
		}
		x.push_back(u);
		u=truoc[u];
	}
	x.push_back(v);
	reverse(x.begin(),x.end());
	for(int i=0;i<x.size();i++){
		cout<<x[i]<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++){
			ke[i].clear();
		}
		memset(ok,false,sizeof(ok));
		memset(truoc,0,sizeof(truoc));
		
		int a,b,nguon,dich;
		cin>>a>>b>>nguon>>dich;
		
		for(int i=0;i<b;i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		
		BFS(nguon,dich);
		Trace(dich,nguon);
		cout<<endl;
	}
	
	return 0;
}
