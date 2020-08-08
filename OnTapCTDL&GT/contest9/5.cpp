#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int u,v;
		vector<int> ke[1005];
		
		cin>>u>>v;
		for(int i=0;i<v;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		
		for(int i=1;i<=u;i++){
			cout<<i<<": ";
			for(int j=0;j<ke[i].size();j++){
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
}
