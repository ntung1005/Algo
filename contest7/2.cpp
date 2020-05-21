#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void push(int &x){
	a.push_back(x);
}

void pop(){
	if(a.size()>0){
		a.pop_back();
	}
}

void show(){
	if(a.size()==0){
		cout<<"NONE"<<endl;
	}
	else{
		cout<<a[a.size()-1]<<endl;
	}
	
}

int main(){
	int n;
	cin>>n;
	int x;
	string method;
	for(int i=0;i<n;i++){
		cin>>method;
		if(method=="PUSH"){
			cin>>x;
			push(x);
		}
		
		if(method=="POP"){
			pop();
		}
		
		if(method=="PRINT"){
			show();
		}
	}
	return 0;
}
