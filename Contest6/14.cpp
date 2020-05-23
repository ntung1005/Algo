#include<bits/stdc++.h>
using namespace std;

bool checkNguyenTo(int i){
	if(i<2) return false;
	for(int j=2;j<i;j++){
		if(i%j==0) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		vector<int> result;
		a.clear();
		result.clear();
		
		for(int i=0;i<n;i++){
			if(checkNguyenTo(i)) a.push_back(i);
		}
		
		int n1=0;int n2=0;
		
		for(int i=0;i<a.size();i++){
			if(a[i]+a[a.size()-1-i]==n){	
				n1=a[i];
				n2=a[a.size()-1-i];
				break; 
			}
			
		}
		
		cout<<n1<<" "<<n2;
		
		cout<<endl;
	}
	
	
	return 0;
}
