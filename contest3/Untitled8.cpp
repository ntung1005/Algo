#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long int T;
	cin>>T;
    while(T--){
    	long int otp[1000],s[1000],f[1000];
		long int dem=0,n;
		
		cin>>n;
		
		for(int i=0;i<n;i++)
			cin>>s[i];
		for(int i=0;i<n;i++){
			cin>>f[i];
		}
		
		
	//	Sort 
		
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(f[i]>f[j]){
					long int tg=f[i];f[i]=f[j];f[j]=tg;
					tg=s[i];s[i]=s[j];s[j]=tg;
				}
			}
		}
		
		int i=0;
		int ok=1;
		for(int j=1;j<=n;j++)
			if(s[j]>f[i]){
				dem++;
				i=j;
			}
		cout<<dem + 1;
	}
	
	
}
