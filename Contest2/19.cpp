#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int n,a[20][20];

void dequy(int i){
	if(i==1) return;
	
	else {
		for(int j=0;j<i;j++)
			a[i-1][j] = a[i][j] + a[i][j+1];
	}
	dequy(i-1);
}

void in(){
	int i,j;
	for(i=1;i<=n;i++){
		cout<<"(";
		for(j=1;j<i;j++) cout<<a[i][j]<<" ";
		cout<<a[i][j] << ") ";
	}
}

int main(){
	int T;
	cin>>T;
	
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++) 
			cin>>a[n][i];
		dequy(1);
		in();
	}
	
	return 0;
}
