#include<bits/stdc++.h>
using namespace std;

long long F[55];

void tinh(){
	F[1]=1;F[2]=2;F[3]=4;
	for(int i=4;i<50;i++){
		F[i]=F[i-1]+F[i-2]+F[i-3];
	}
}

int main(){
	int t,n;
	tinh();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<F[n]<<endl;
	}
}
