#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];

void Try(int hang,int n){
	
	
	
	for(int i=0;i<n;i++){
		a[hang][i] = a[hang-1][i]+a[hang-1][i+1];
		cout<<a[hang][i]<<" ";
	}
	cout<<endl;
	if(n>=0) Try(hang+1,n-1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a[0][i];
		}
		
		for(int i=0;i<n;i++){
			cout<<a[0][i]<<" ";
		}
		cout<<endl;
		
		Try(1,n-1);
	}
}
