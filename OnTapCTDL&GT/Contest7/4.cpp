#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<char> stk;
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		
		for(int i=0;i<s.size();i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '('){
				stk.push(s[i]);
			}else{
				char top = stk.top();
				if(s[i] == ')' && top == '('){
					stk.pop();
				}
				
				if(s[i] == ']' && top == '['){
					stk.pop();
				}
				
				if(s[i] == '}' && top == '{'){
					stk.pop();
				}
			}
		}
		
		if(!stk.empty()){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
