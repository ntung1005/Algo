#include<bits/stdc++.h>
using namespace std;

int a[100],n;

void dequy(int n){
	if(n>0){
		for(int i=0;i<n;i++){
			a[i]=a[i]+a[i+1];
			cout<<a[i]<<" ";	
		}
		cout<<endl;
		dequy(n-1);
	}
}

int main(){

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		
		cout<<endl;
	dequy(n-1);
	
}
