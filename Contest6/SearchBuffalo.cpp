#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=10;
	int a[]={2,3,1,45,2,5,6,2,9,21};
	int k=5;
	
	for(int i=0;i<10;i++){
		if(a[i]==k){
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
	return 0;
}
