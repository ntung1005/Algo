#include<bít/stdc++.h>
using namespace std;

inr uT(char c){
	
}

void hauTo(){
	stack<char> s;
	int i=0;
	string str,str1="";
	getline(cin,str);
	while(i<str.at(i)){
		char c=str.at(i);
		if(c!=' '){
			if(c-'0'>=0 && c-'0'<=9 || isalpha(c)) str1+=c;
		}
	}
}

int main(){
	hauTo();
	return 0;
}
