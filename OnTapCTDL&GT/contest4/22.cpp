#include<bits/stdc++.h>
using namespace std;

int a[10001];

int BinarySearch(int n,int k){
	int mid,l,r;
	
	l = 0;
	r = n-1;
	mid = (r+l)/2;
	
	while(l<=r){
		if(a[mid] == k){
			return mid + 1;
		}
		if(a[mid] > k){
			r = mid - 1;
			
		}
		
		if(a[mid] < k){
			l = mid+1;
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
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		cout<<BinarySearch(n,k)<<endl;
		
	}
}
