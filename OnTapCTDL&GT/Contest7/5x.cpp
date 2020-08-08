#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		stack<int> stk;
		
		int result = 0;
		
		stk.push(-1);
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				stk.push(i);
			}
			else{
				stk.pop();
				if(stk.size()>0)
					result = max(result,i-stk.top());
				if(stk.size()==0) stk.push(i);
			}
		}
		
		cout<<result<<endl;
	}
}
