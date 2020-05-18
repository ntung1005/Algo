#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,a[1005];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		
		if(n%2!=0){
			
			for(int i=0;i<n/2;i++){
				cout<<a[i]<<" "<<a[n-i-1]<<" ";
			}
			cout<<a[n/2];
		}
		else{
			for(int i=0;i<n/2;i++){
				cout<<a[i]<<" "<<a[n-i-1]<<" ";
			}
		}
	
		cout<<endl;
	}
}
