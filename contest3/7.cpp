#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long n,A[100000000],B[100000000];

int main(){
	
	long int T;
	cin>>T;
	while(T--){
		long long tongMin=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
	
		for(int i=0;i<n;i++){
			cin>>B[i];
		}
		
		sort(A,A+n);
		sort(B,B+n,greater<int>());
		
		for(int i=0;i<n;i++){
			tongMin+=(A[i]*B[i]);
		}

		cout<<tongMin<<endl;
	}
	
}
