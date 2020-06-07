#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int n,k,a[100],b[100];

void sinhkt(){
	int i=k;
	while(i>0&&a[i]==n-k+i)i--;
	if(!i){
		cout<<k;
	}
	else 
	{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		
		int dem = 0;
		
		for(int i=1;i<=k;i++){
			for(int j=1;j<=k;j++){
				if(a[i] == b[j]) {
					dem++;
				}
			}
		}
		
		cout << k - dem;
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
			b[i] = a[i];
		}
			
		sinhkt();
		
		cout<<endl;
	}
}
