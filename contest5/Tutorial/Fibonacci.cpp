#include<bits/stdc++.h>
using namespace std;
int F[105];

int n;

int tinh(){
	F[1]=1;
	F[2]=1;
	
	for(int i=3;i<=n;i++){
		F[i]=F[i-1]+F[i-2];
	}
	
	return F[n];
}

int main(){
	
	cin>>n;
	cout<<tinh()<<endl;	
}
