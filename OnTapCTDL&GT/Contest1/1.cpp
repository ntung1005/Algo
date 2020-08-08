#include<bits/stdc++.h>
using namespace std;

void SinhNhiPhanKeTiep(string s){
	
	int i = s.size()-1;
	
	while(i>=0 && s[i]=='1') i--;
	
	if(i>0){
		s[i] = '1';
		for(int j=i+1;j<s.size();j++){
			s[j]='0';
		}
		
		cout<<s<<endl;
	}else{
		cout<<s<<endl;
	}
	
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		SinhNhiPhanKeTiep(s);
	}
}
