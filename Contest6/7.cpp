#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int begin,finish;
		int n,a[100005],b[100005];
		
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		
		sort(b,b+n);
		
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				begin=i+1;
				break;
			}
		}
		
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				finish=i+1;
				break;
			}
		}
		
		cout<<begin<<" "<<finish<<endl;
		
	}
	
	return 0;
	
}
