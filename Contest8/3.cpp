#include<bits/stdc++.h>
using namespace std;

deque<int> dq;

void pushFront(int &x){
	dq.push_front(x);
}

void pushBack(int &x){
	dq.push_back(x);
}

void popFront(){
	dq.pop_front();
}

void popBack(){
	dq.pop_back();
}

void printFront(){
	if(dq.size()>0){
		cout<<dq.front()<<endl;
	}
	else{
		cout<<"NONE"<<endl;
	}
}

void printBack(){
	if(dq.size()>0){
		cout<<dq.back()<<endl;
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
		int x;
		cin>>method;

		if(method=="PUSHFRONT"){
			cin>>x;
			pushFront(x);
		}
		
		if(method=="PUSHBACK"){
			cin>>x;
			pushBack(x);
		}
		
		if(method=="PRINTFRONT" ){
			printFront();
		}
		
		if(method=="PRINTBACK"){
			printBack();
		}
		
		if(method=="POPFRONT" && dq.size()>0){
			popFront();
		}
		
		if(method=="POPBACK"&& dq.size()>0){
			popBack();
		}
	}
}
