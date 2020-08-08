#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		stack<char> stk;
		
		string s;
		
		cin>>s;
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='[' || s[i]=='{' || s[i]=='('){
				stk.push(s[i]);
			}
			
			if(s[i]=='}' || s[i]==']' || s[i]==')'){
				char top = stk.top();
				if(s[i]=='}' && top=='{'){
					stk.pop();
				}
				if(s[i]==']' && top=='['){
					stk.pop();
				}	
				if(s[i]==')' && top=='('){
					stk.pop();
				}		
			}
		}
		
		if(stk.empty()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
