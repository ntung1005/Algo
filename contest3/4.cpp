#include<bits/stdc++.h>
using namespace std;

long long n;
int a[100];

int main(){
	
	long int T;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
		
		vector<long int> number1,number2;
		
		for(int i=0;i<n;i+=2){
			number1.push_back(a[i]);
		}
		
		for(int i=1;i<n;i+=2){
			number2.push_back(a[i]);
		}
		
		long long tong=0;
		
		for(int i=0;i<number1.size();i++){
			tong+=(number1[i]*pow(10,number1.size()-i-1));
		}
		
		for(int i=0;i<number2.size();i++){
			tong+=(number2[i]*pow(10,number2.size()-i-1));
		}
		
		cout<<tong<<endl;
	}
	
	return 0;

}
