#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		long long a[n];
		for(int i=0;i<n-1;i++){
			cin>>a[i];
		}
		
		int i=0;
		while(a[i]+1==a[i+1]){
			i++;
		}
		
		cout<<a[i]+1<<endl;
	}
}
