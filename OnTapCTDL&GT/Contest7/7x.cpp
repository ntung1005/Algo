#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		stack<char> stk;
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='(' || s[i]==')' && stk.size() ==0 ) stk.push(s[i]);
			else if(s[i]==')'){
				char top = stk.top();
				
				if(stk.top()=='(' && stk.size()>0) stk.pop();
				else{
					stk.push(s[i]);
				}
			
			}
		}
		
		int d1=0,d2=0;
		while(!stk.empty()){
			if(stk.top()=='('){
				d1++;
			}else{
				d2++;
			}
			
			stk.pop();
		}
		
		int result = d1/2+d2/2+d1%2+d2%2;
		
		cout<<result<<endl;
		
	}
}