#include<bits/stdc++.h>
#include <string>
using namespace std;

string A,B;

int main(){
	cin>>A>>B;
	
	for(int i=0;i<A.size();i++){
		if(A[i]=='6'){
			A[i]='5';
		}
	}
	
	for(int i=0;i<B.size();i++){
		if(B[i]=='6'){
			B[i]='5';
		}
	}

	


}
