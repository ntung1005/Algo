#include<bits/stdc++.h>
using namespace std;

stack<int> stk;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				stk.push(i);
			}
			
			else if(s[i]==')'){
				if(stk.size()>0){
					
					int top=stk.top();
					stk.pop();
					
					for(int j=0;j<s.size();j++){
//						if(j!=top && j!=i){
							cout<<s[i];
//						}
					}
					cout<<endl;
					
				}
			}
		}
		
		
	}
	
}
