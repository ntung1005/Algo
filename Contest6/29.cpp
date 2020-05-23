#include <bits/stdc++.h> 
using namespace std;  

int n;
int a[105];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		
		int k=0;
		
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1])
			{
				k++;
				swap(a[j],a[j+1]);
			}
		}
		
		if(k==0){
			return 0;
		}
		if(i<=k){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		
		
	}
}
