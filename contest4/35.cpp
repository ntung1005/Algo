#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100];
		bool ktd = false;
		int Max;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) ktd=true;
			if(i=0) Max = a[0];
			else{
				if(Max<a[i]) Max=a[i];
			}
		}
		
		if(!ktd) cout<<Max<<endl;
		else{
			int sum = 0,res = a[0];
			for(int i=0;i<n;i++){
				if(sum+=a[i]<0){
					sum = 0;
					continue;
				}
				sum+=a[i];
				if(res<sum) res=sum;
			}
			
			cout<<res<<endl;
		}
	}
	
	return 0;
}
