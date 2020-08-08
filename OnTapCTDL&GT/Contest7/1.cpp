#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	
	while(true){
		string method;
		int n;
		
		cin>>method;
		if(method == "push"){
			cin>>n;
			v.push_back(n);
		}
		
		if(method == "pop"){
			if(v.size()>0){
			
				v.pop_back();
				
			}
		}
		
		if(method=="show"){
			if(v.size()>0){
				for(int i=0;i<v.size();i++){
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
			else{
				cout<<"empty";
			}
		
		}
	}
}
