#include<bits/stdc++.h>

using namespace std;
int M=1e9+7;

//long long powerM(int n,int k){
//	if(k=0) return 1;
//	long long x = powerM(n,k/2);
//	
//	if(k%2==0) return x*x%M;
//	return n*(x*x%M)%M;
//}
//
//int main(){
//	int t,n,k;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<powerM(n,k)<<endl;
//	}	
//}

long long powerM(long long n,long long k){
	if(k=0) return 1;
	
	long long x = power(n,k/2);
	
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<powerM(n,k)<<endl
	}
	return 0;
}
