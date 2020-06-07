#include<bits/stdc++.h>
using namespace std;

long long a[100000];

int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		stack<long long> x;
		stack<long long> y;
		
		y.push(-1);
		
		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				x.push(a[j]);
			}
			while(!x.empty()){
				if(x.top() > a[i] ){
					y.push(x.top());
					break;
				}
	
				x.pop();
			}
			if(x.empty()){
				y.push(-1);
			}
		}
		
		
		while(!y.empty()){
			cout<<y.top()<<" ";
			y.pop();
		}
		
		cout<<endl;
	}
	
	return 0;
	
}
