#include<bits/stdc++.h>
using namespace std;

int main(){
	
	stack<int> stk;
	
	int t;
	cin>>t;
	while(t--){
		
		string method;
		int n;
		
		cin>>method;
		
		if(method=="PUSH"){
			cin>>n;
			stk.push(n);
		}
		
		if(method=="POP"){
			if(!stk.empty()){
				stk.pop();
			}
			
		}
		
		if(method=="PRINT"){
			if(!stk.empty()){
				cout<<stk.top()<<endl;
				
			}
			else{
				cout<<"NONE"<<endl;
			}
			
		}
	}
	
	
}
