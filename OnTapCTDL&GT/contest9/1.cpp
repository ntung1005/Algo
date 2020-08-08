#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		
		vector<int> arr[1005];
		for(int i=0;i<e;i++){
			int a,b;
			cin>>a>>b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		
		for(int i=1;i<=v;i++){
			cout<<i<<": ";
			for(int j=0;j<arr[i].size();j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
