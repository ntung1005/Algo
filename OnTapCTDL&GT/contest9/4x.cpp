#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j] =0;
		}
	}
	
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		s+=' ';
		
		int so = 0;
		int k=0;
		while(k<s.size()){
		
			if(s[k] == ' '){
				a[i][so] = 1;
				so = 0;
			}
			else{
				so = so*10+(s[k]-'0');
			}
			
			k++;
		}
		
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
