#include<bits/stdc++.h>
using namespace std;

string s;

int degree(char c){
	if(c=='^') return 4;
	if(c=='*' || c=='/') return 3;
	if(c=='+' || c=='-') return 2;
	return 1;
}

string InfixToPostFix(){
	string res = "";
	stack<char> stk;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' && s[i]<='9'){
			res+=s[i];
		}
		
		else if(s[i]=='(') stk.push(s[i]);
		else if(s[i]==')'){
			while(stk.size() && stk.top()!='('){
				res+= stk.top();
				stk.pop();
			}
			stk.pop();
		}
		
		else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^'){
			res+="#";
			char top = stk.top();
			while(degree(s[i]) < degree(top)){
				res+=top;
			}
			stk.push(s[i]);
		}
		
	}
	
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<InfixToPostFix();
	}
}
