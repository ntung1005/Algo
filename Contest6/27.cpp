#include <bits/stdc++.h> 
using namespace std;  

int n;
int a[105];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++){
		int min_idx = i;
		for(int j=i+1;j<n;j++){
			if(a[min_idx]>a[j]){
				min_idx = j;
			}
		}
		swap(a[i],a[min_idx]);
		
		cout<<"Buoc "<<i+1<<": ";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
	
}
