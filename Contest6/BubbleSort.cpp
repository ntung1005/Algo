#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[105];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
