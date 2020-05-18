#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		
		vector<long long int> arrsmall,arrbig;
		long int sumarrsmall=0,sumarrbig=0;
		long long n,k,a[100];
		
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		if(n-k>k){
			sort(a,a+n);
			for(int i=0;i<n;i++){
				if(i<k&&i>=0){
					sumarrsmall+=a[i];
				}if(i>=k&&i<n){
					sumarrbig+=a[i];
				}
			}
		}
		if(n-k<=k){
			sort(a,a+n, greater<int>());
			for(int i=0;i<n;i++){
				if(i<k &&i >=0){
					sumarrbig+=a[i];
				}
				if(i>=k && i<n){
					sumarrsmall+=a[i];
				}
			}
		}
		
		cout<<(sumarrbig-sumarrsmall)<<endl;
	}
	
	return 0;
}
