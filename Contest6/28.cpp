#include <bits/stdc++.h> 
using namespace std;  

int n;
int a[105];

int main(){
	vector<int> b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		int key = a[i];
		int j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		
		b.push_back(key);
		
		for(int k=0;k<=b.size();k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	
}
