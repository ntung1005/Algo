#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1005],b[1005];
int sum,stop;

void in(){
	sum =0;
	
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	
	if(sum==k){
		stop = 1;
		int x =0;
		cout<<"[";
		for(int i=0;i<n;i++){
			if(a[i]==1 && x==1){
				cout<<" "<<b[i];
			}
			if(a[i]==1 && x==0){
				cout<<b[i];
				x=1;
			}
		}
		
		cout<<"]";
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
	}
	
	if(i==n) {
		in();
	}
	else Try(i+1);
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n>>k;
		
		for(int i = 0;i<n;i++){
			cin>>b[i];
		}
		
		sort(b,b+n);
		
		Try(1);
		if(stop ==0) cout<<-1;
		
		cout<<endl;
	}
}
