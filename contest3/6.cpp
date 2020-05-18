#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	cin>>T;
	while(T--){
	
		long long int n,a[100],b[100];
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		
		sort(b,b+n);
		
		int ok=0;
		
		for(int i=0;i<n;i++){
			if(a[i]==b[i]||a[i]==b[n-i-1]){
				ok = 1;
			}else{
				ok=0;
			}
		}
		
		if(ok==1) cout<<"Yes";
		else cout<<"No";
		
		cout<<endl;
	}
}
