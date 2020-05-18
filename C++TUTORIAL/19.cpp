#include<bits/stdc++.h>
using namespace std;

void xuat(int a[],int n){
	cout<<"[";
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	cout<<"]";
	cout<<endl;
}

void sinh(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=a[i]+a[i+1];
	}
}

void tinh(int a[],int n){
	while(n>0){
		xuat(a,n);
		sinh(a,n);
		n--;
	}
}

int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	tinh(a,n);
	
}
