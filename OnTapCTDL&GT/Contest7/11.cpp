#include<bits/stdc++.h>
using namespace std;

int degree(char c){
	if(c=='^') return 5;
	if(c=='*' || c=='/') return 4;
	if(c=='+' || c=='-') return 3;
	return 2;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		stack<char> stk;
		
		cin>>s;
		
		string res="";
		
		for(int i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				res+=s[i];
			}
			if(s[i]>='a'&&s[i]<='z'){
				res+=s[i];
			}
			else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				while(stk.size() && degree(stk.top()) >= degree(s[i])){
					res+=stk.top();
					stk.pop();
				}
				stk.push(s[i]);
			}
			else if( s[i]=='('){
				stk.push(s[i]);
			}
			
			else if(s[i]==')' && !stk.empty()){
				
				if(stk.top() != '('){
					res+=stk.top();
					stk.pop();
				}
				stk.pop();
			}
		}
		
		while(!stk.empty()){
			res+=stk.top();
			stk.pop();
		}
		
		cout<<res<<endl;
	}
	
}
