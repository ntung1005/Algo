#include<bits/stdc++.h>
using namespace std;

void QuickSort(int a[],int l,int r){
	int i=l,j=r;
	int key = a[(l+r)/2];
	
	while(i<=j){
		while(a[i]<key) i++;
		while(a[j]>key) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;j--;
		}
	}
	
	if(i<r) QuickSort(a,i,r);
	if(l<j) QuickSort(a,l,j);
}

int main(){
	int a[100];
	int n=100;
	for(int i=0;i<n;i++){
		a[i]=rand()%1000;
	}
	
	QuickSort(a,0,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
