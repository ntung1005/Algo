#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long d;
	cin>>t;
	while(t--){
		int n,k,i,j;
		cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		d = 0;
		for(int i=0;i<n-1;i++){
			j=bsearch(a,i+1,n-1,a[i]+k){
				if(j!=-1) d+=(j-i);
			}
		}
		cout<<d<<endl;
	}
}
