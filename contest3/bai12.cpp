#include<iostream>
using namespace std;
string a;
int n;

int kiemtra(){
	cin>>a;
	n=a.size();
	int b[26]={0};
	for(int i=0;i<=n;i++)
		b[a[i]-'a']++;
	int max=b[0];
	for(int i=0;i<26;i++){
		if(b[i]>max)
			max=b[i];
	}
	if(n%2==0){
		if(max<=n/2){
		return 1;
		}else 
		return -1;
	}
	else{
		if(max <=(n/2+1)){
			return 1;
		}else 
		return -1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cout<<kiemtra();
		cout<<endl;
	}
}
