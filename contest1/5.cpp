#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int a[50],n,k;

void nhap(){
	cin>>n>>k;
}

int sinh(int &ok){
	int i = k;
	while(i>0 && a[i] == n+i-k) i--;
	a[i]++;
	if(i>0){
		for(int j = i+1;j<= n ; j++){
			a[j] = a[i]+j-i;
		}
	}
	else ok = 0;
}

void xuat(){
	for (int i=1;i<=k;i++)
		cout<<a[i];
		cout<<" ";
}

void next (int ok){
	for (int i =1;i<=n;i++) a[i] = i;
	while(ok){
		xuat();
		sinh(ok);
	}
}

int main (){
	int T;
	cin>>T;
	while(T--){
		int ok = 1;
		nhap();
		next(ok);
		cout<<endl;
	}
	return 0;
}
