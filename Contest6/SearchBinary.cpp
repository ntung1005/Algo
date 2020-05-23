#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int n,int k){
	int l=0,r=n-1,mid,res;
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
	int n=10;
	int a[]={2,3,1,45,2,5,6,2,9,21};
	int k=5;
	
	sort(a,a+10);
	
	int vt = BS(a,n,k);
	cout<<vt;
	

	return 0;
}
