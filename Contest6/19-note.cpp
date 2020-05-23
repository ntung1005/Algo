#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int d[1003]={0};
		long long L,R;
		vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i==0) L=R=a[i];
			L=min(L,a[i]);
			R=max(R,a[i]);
			d[a[i]] = 1;
		}
		
		long long res=0;
		for(long long i=L;i<=R;i++){
			if(d[i]==0) res++;
		}
		cout<< res <<endl;
	}
	
	return 0;
}
