#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int n,k,a[100];

int check(){
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i])dem++;
	}
	if(dem==k)return 1;
	return 0;
}

void tim(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i==n){
			
			if(check()){
				for(int l=1;l<=n;l++){
					cout<<a[l];
				}
				cout<<endl;
			}
		}
		else tim(i+1);
	};
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		tim(1);
	}
	return 0;
}
