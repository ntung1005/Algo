#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<string> q;
		
		q.push("1");
		
		for(int i =0;i<n;i++){
			string f1 = q.front();q.pop();
			
			cout<<f1<<" ";
			string f2 = f1;
			q.push(f1.append("0"));
			q.push(f2.append("1"));
		}
		cout<<endl;
	}
}
