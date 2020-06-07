#include<bits/stdc++.h>
using namespace std;

queue<int> dq;

void push(int &x){
	dq.push(x);
}

void pop(){
	if(dq.size()>0){
		dq.pop();
	}
}

void printFront(){
	if(dq.size()>0){
		cout<<dq.front()<<endl;
	}
	else{
		cout<<"NONE"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string method;
		cin>>method;
		
		if(method=="PUSH"){
			int x;
			cin>>x;
			push(x);
		}
		
		if(method=="POP" && dq.size()>0){
			pop();
		
		}
		if(method=="PRINTFRONT"){
			printFront();
		}
		
	}
	return 0;
}
