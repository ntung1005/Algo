#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<long long> stk;
		
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^'){
				long long b = stk.top(); stk.pop();
				long long a = stk.top(); stk.pop();
				
				long long tmp;
				
				if(s[i] == '+') tmp=b+a;
				if(s[i] == '-') tmp=b-a;
				if(s[i] == '*') tmp=b*a;
				if(s[i] == '/') tmp=b/a;
				if(s[i] == '%') tmp=b%a;
				if(s[i] == '^') {
					tmp = b;
					for(int i=0;i<a-1;i++){
						tmp*=b;
					}
				}
				stk.push(tmp);
			}
			else{
				stk.push((long long)(s[i]-'0'));
			}
		}
		
		cout<<stk.top()<<endl;
	}
}
