#include<bits/stdc++.h>
using namespace std;

int n,a[1005];

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		int i = n - 1;
		while(i>=0 && a[i+1] < a[i]) i--;
		
		if(!i){
			
		}
		
	}
}
