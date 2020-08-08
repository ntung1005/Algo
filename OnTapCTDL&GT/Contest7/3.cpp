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
		
		int i =0;
	
		while(i<s.size()){
			if(s[i] != ' '){
				stk.push(s[i]);
			}
			
			else{
			
				while(!stk.empty()){
					cout<<stk.top();
					stk.pop();
				}
				cout<<" ";
			}
			i++;
		}
		
		while(!stk.empty()){
			cout<<stk.top();
			stk.pop();
		}
		
		cout<<endl;
	}
}
