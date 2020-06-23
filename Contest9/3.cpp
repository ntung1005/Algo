#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		vector<int> a;
		for(int j=1;j<=n;j++){
			int so;
			cin>>so;
			if(so==1) a.push_back(j);
		}
		
		for(int j=0;j<a.size();j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	
	}
	
	return 0;
	
}
