#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int n;
int a[100];
int l[100];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=rand()%15+1;
	}
	
	l[0]=1;//co so quy hoach dong
	int lmax; //luu lai vi tri lon nhat tu a[0] -> a[i]
	
	//quy hoach dong
	for(int i=1;i<n;i++){
		lmax = 0;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				if(l[j]>lmax){
					lmax=l[j];
				}
			}
			
			l[i]=lmax+1;
		}
		
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<l[i]<<"\t";
	}
	cout<<endl;
	int lengthMax=0;
	for(int i=0;i<n;i++){
		if(lengthMax<l[i]){
			lengthMax=l[i];
		}
	}
	
	cout<<lengthMax;
	
}
