#include<bits/stdc++.h>
using namespace std;

int n,a[10000001];

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		sort(a+1,a+n+1);
		
		if(a[n]-a[1]==0) cout<<"-1"<<endl;
		else{
			for(int i=1;i<=n;i++){
				if(a[i+1]-a[i]!=0){
					cout<<a[i]<<" "<<a[i+1]<<endl;
					break;
				}
			}
		}
	}
}
