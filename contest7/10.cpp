#include<bits/stdc++.h>
using namespace std;

string phaDauNgoac(string s){
	stack<int> stk;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			stk.push(i);
		}
		
		else if(s[i]==')'){
			if(stk.size()>0){
				
				int top=stk.top();
				stk.pop();
				
				if(top==0) continue;
				else if(s[top-1]=='+') continue;
				else if(s[top-1]=='-') {
					for(int j=top;j<=i;j++){
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
					}
				}
			}
		}
	}
	
	string str="";
	
	for(int i=0;i<s.size();i++){
		if(s[i]!='(' && s[i]!=')' && s[i]!=' '){
			str+=s[i];
		}
	}
	
	return str;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		cin>>b;
		
		a = phaDauNgoac(a);
		b = phaDauNgoac(b);
		
		if(a==b) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
