#include<bits/stdc++.h>
using namespace std;

long int n;
long long a[100000];

int main(){
	long int T;
	cin>>T;
	while(T--){
		long long tong=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		
		sort(a,a+n);
		
		for(int i=0;i<n;i++){
			tong+=a[i]*i;
		} 
		
		long int m = pow(10,9)+7;
		
		cout<<tong%m<<endl;

		
	}
	
	return 0;
}
