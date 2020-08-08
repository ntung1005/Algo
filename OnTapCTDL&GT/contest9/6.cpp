#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void DFS(int n){
	ok[n] = true;
	cout<<n<<" ";
	
	for(int i=0;i<ke[n].size();i++){
		if(!ok[ke[n][i]]){
			DFS(ke[n][i]);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int v,e,n;
		
		
		cin>>v>>e>>n;
		
		for(int i = 0;i<e;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		
		DFS(n);
	}
}
