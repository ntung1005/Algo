#include<bits/stdc++.h>
using namespace std;

int n,a[105],b[105],k;
int stop;

void xuat(){
	int sum = 0;
	
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	
	if(sum == k){
		cout<<"[";
		for(int i=0;i<n;i++){
			if(b[i]==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<"]"<<" ";
	}
}

void dequy(int x){
	
	for(int i=1;i>=0;i--){
		b[x]=i;
		if(x==n-1) xuat();
		else dequy(x+1);
	}
	
}

int main(){
	cin>>n>>k;
	stop=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	dequy(0);


}
