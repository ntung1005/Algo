#include<bits/stdc++.h>
using namespace std;
 
void FixedUpdate(){
	string s;
	getline(cin,s);
	stack<char> stk;
 
	for (int i=0;i<s.length();i++) {
		while(i<s.length()&&s[i] != ' ') {
			stk.push(s[i]);
			i++;
		}
		while(!stk.empty()) {
			cout<<stk.top();
			stk.pop();
		}
		cout<<" ";
	}
	cout<<endl;
}
int main(){
	int t=1;
	cin >> t; cin.ignore();
	while(t--) {
		FixedUpdate();
	}
 
	return 0;
}
 
