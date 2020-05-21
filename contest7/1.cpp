#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void push(int &x){
	a.push_back(x);
}

void pop(){
	a.pop_back();
}

void show(){
	if(a.size()==0){
		cout<<"empty"<<endl;
	}
	else{
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	int x;
	string method;
	while(cin>>method){
		if(method=="push"){
			cin>>x;
			push(x);
		}
		
		if(method=="pop"){
			pop();
		}
		
		if(method=="show"){
			show();
		}
	}
	
	
}
