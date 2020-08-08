#include<bits/stdc++.h>
using namespace std;

void phanTich(int s,int d){
	if(s>d*9){
		cout<<-1;
		return ;
	}
	
	long int result[d-1];
	
	s = s-1;
	
	int i=d-1;
	
	while(i>=0){
		if(s > 9){
		result[i]=9;
		s = s -9;
	
		}else{
			result[i]=s;
			s=0;
	
		}
		
		i--;
	}
	
	result[0]+=1;
	
	for(int i=0;i<d;i++){
		cout<<result[i];
	}
	cout<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		
		phanTich(s,d);
	}
}
