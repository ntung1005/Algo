#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n;

void Try(int k){
	if(k==n-1) return;
	else{
		for(int i=0;i<n - 1 - k;i++){
			a[k+1][i] = a[k][i]+a[k][i+1];
		}
	}
	
	Try(k+1);
}

void in(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
	
int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[0][i];
		}
		
		Try(0);
		in();
	}
}
