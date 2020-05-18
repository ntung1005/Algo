#include<bits/stdc++.h>
using namespace std;

bool check=false;
int dem=0;
bool ok[100];

int n,k,a[105];
int s =0;

void quaylui(int sum,int dem){
	if(check=true){
		return;
	}
	if(dem==k){
		check=true;
		return;
	}
	for(int i=1;i<=n;i++){
		if(ok[i]==false){
			ok[i]=true;
			if(sum==s){
				quaylui(0,dem+1);
				return;
			}
			if(sum>s){
				return;
			}
			else quaylui(sum+s,dem);
		}
		ok[i]=false;
	}
}

int main(){
	check=false;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	
	if(s % k == 0 ){
		s/=k;
		quaylui(0,0);
		if(check==true) cout<<1;
		else cout<<0;
	}
	else{
		cout<<0;
	}
	
}
