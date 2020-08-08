#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n;
		cin>>s;
		
		priority_queue<int,vector<int>> q;
		
		int d[1005]={0};
		
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
		}
		
		for(int i=0;i<1005;i++){
			if(d[i]>0){
				q.push(d[i]);
			}
		}
		
		while(n>0){
			int top=q.top();q.pop();
			q.push(top-1);
			n--;
		}
		
		
		int res = 0;
		while(!q.empty()){
			res = res + q.top()*q.top();
			q.pop();	
		}
		
		cout<<res<<endl;
	}
}
