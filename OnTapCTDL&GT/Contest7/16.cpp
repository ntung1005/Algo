#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		stack<int> stk;
		
		for(int i=0;i<s.size();i++){
		
		if(s[i] == '+'|| s[i]=='-' || s[i]=='*' || s[i] == '/' ){
			int fi = stk.top();stk.pop();
			int se = stk.top();stk.pop();
		
			if(s[i] == '+' ){
				
				int tmp = se+fi;
				stk.push(tmp);
			}
			
			if(s[i] == '-' ){
				
				int tmp = se-fi;
				stk.push(tmp);
			}
			
			if(s[i] == '/' ){
				
				int tmp = se/fi;
				stk.push(tmp);
			}
			
			if(s[i] == '*' ){
				
				int tmp = se*fi;
				stk.push(tmp);
				
			}
			if(s[i] == '^' ){
				
				int tmp = pow(se,fi);
				stk.push(tmp);
				
			}
		}
			
			else{
				stk.push((int)(s[i]-'0'));
			}
		}
		
		cout<<stk.top()<<endl;
	}
}
