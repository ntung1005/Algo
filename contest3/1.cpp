#include<bits/stdc++.h>
using namespace std;

int n,a[10]={1,2,5,10,20,50,100,200,500,1000};

int main(){
	
	int T;
	cin>>T;
	while(T--){
		cin>>n;
	
		int dem = 0;
	//	
		for ( int i = 9; i >= 0; --i ) {
	        while ( a[i] <= n ) {
	            n -= a[i];
	            dem++; 
			}
	    }
	
		cout<<dem<<endl;

	}
	
}
