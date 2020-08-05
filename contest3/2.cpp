#include<bits/stdc++.h>

using namespace std;

int chuyenSangNam(int k){
	
	int result=0;
	int i=0;
		
	while(k>0){
		
		int duX = k%10;
		if(duX==6){
			duX=5;
		}
		
		result = result + duX*pow(10,i);
		
		k = k/10;
		i++;
	}
	
	return result;
}

int chuyenSangSau(int k){
	
	int result=0;
	int i=0;
		
	while(k>0){
		
		int duX = k%10;
		if(duX==5){
			duX=6;
		}
		
		result = result + duX*pow(10,i);
		
		k = k/10;
		i++;
	}
	
	return result;
}

int main(){
	
	int A,B;
	cin>>A>>B;
	
	cout<<chuyenSangNam(A) + chuyenSangNam(B)<<" "<<chuyenSangSau(A) + chuyenSangSau(B);
	
	return 0;
}
