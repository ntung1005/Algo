#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int n,k,A[100];

int ok=1;

void sinh(int &ok){
	int i =n;
	while(i>0 && A[i]==1) i--;
	A[i]=1;
	if(i>0){
		for(int j=i+1;j<=n;j++){
			A[j]=0;
		}
	}
	else ok =0;
	
}

void xuat(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(A[i]==1) dem++;
	}
	
	if(dem==k){
		for(int i=0;i<n;i++){
			cout<<A[i];
		}
		cout<<" ";
	}
	
}

void next(int ok){
	for(int i=1;i<=n;i++) A[i] = 0;
	
	while(ok){
		xuat();	
		sinh(ok);
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>k;
		next(ok);
		cout<<endl;
	}
	return 0;
}
