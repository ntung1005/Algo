#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int d[n+5]={0};
		int val;
		for(int i=1;i<n;i++){
			cin>>val;
			d[val]++;
		}
		
		for(int i=1;i<=n;i++){
			if(d[i]==0){
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
