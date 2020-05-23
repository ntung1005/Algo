#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int n,int k){
	int l=0,r=n-1,mid;
	while(l<=r){
		mid = (l+r)/2;
		int key = a[mid];
		
		if(key == k){
			return 1;
		}
		if(key>k){
			r=mid-1;
		}
		else if(key<k){
			l=mid+1;
		}
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		cout<<BS(a,n,k)<<endl;
	}
	
	return 0;
}
