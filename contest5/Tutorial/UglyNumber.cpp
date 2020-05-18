#include<bits/stdc++.h>
using namespace std;

long long F[1005];

int main(){
	F[1]=1;
	F[2]=2;
	
	int n;
	cin>>n;
	
	for(int i=3;i<=n;i++){
		F[i]%3==0;
	}
	
	cout<<F[n];
	
	
}
