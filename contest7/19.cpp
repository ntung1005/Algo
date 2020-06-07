#include<bits/stdc++.h>

using namespace std;

int main(){

		string s;
		cin>>s;
		stack<int> stk;
		stk.push(1);
		for(int i=0;i<s.size();i++){
			if(s[i]=='D'){
				int tmp = stk.top();
				stk.push(tmp+1);
			}
			if(s[i]=='I'){
				stack<int> xxx;
				while(!stk.empty()){
					xxx.push(stk.top());
					stk.pop();
				}
				stk = xxx;
				int tmp = stk.top()+1;
				stk.pop();
				stk.push(tmp+1);
				stk.push(tmp);
			}
		}
		
		while(!stk.empty()){
			cout<<stk.top();
			stk.pop();
		}

}
