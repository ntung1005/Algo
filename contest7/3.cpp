#include<bits/stdc++.h>
#include<string>
using namespace std;

void dao(){
	string str;
	getline(cin,str);

	stack<char> st;
	for(int i=0;i<str.length();++i){
		if(str[i]!=' '){
			st.push(str[i]);
		}
		else{
			while(st.empty()==false){
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
	}
	
	while(st.empty()==false){
		cout<<st.top();
		st.pop();
	}
	
	cout<<endl;
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		dao();
	}
	
	return 0;
	
}
