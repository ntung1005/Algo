#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		
		stack<char> stk;
		
		bool check=false;
		
		for(int i=0;i<s.size();i++){
			
			if(s[i]==')'){
				check = true;
				char top = stk.top();stk.pop();
				
				while(top!='('){
					if(top=='+' || top=='-' || top=='*' || top=='/'){
						check = false;
					}
					top = stk.top();
					stk.pop();
					
				}
				
				if(check) break;
				
			}
			else{
				stk.push(s[i]);
			}
			
		}
		
		if(check) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
