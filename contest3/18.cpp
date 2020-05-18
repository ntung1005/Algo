#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long int T;
	cin>>T;
	while(T--){
	
		long int n;
		cin>>n;
		long int nagain = n;
		long int a[2] ={7,4};
		long int tong=0;
		vector<long int> arr;
		
		for ( int i = 0; i < 2; i++ ) {
	        while ( a[i] < n/2 ) {
	            n -= a[i];
	            arr.push_back(a[i]);
	            tong+=a[i]; 
	            
			}
			if(a[i]==n){
				n =0;
	            arr.push_back(n);
	            tong+=n; 
			}
	    }
		
		if(tong == nagain){
			for(int i=arr.size()-1;i>=0;i--){
				cout<<a[i];
			}
			cout<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
