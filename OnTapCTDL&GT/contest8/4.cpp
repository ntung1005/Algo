#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		
		priority_queue<int, vector<int> > q;
		
		int d[100001]={0};
		
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
		}
		
		for(int i=0;i<100001;i++){
			if(d[i]>0){
				q.push(d[i]);
			}
		}
		
		while(k>0 && q.size()>0){
			int top = q.top();q.pop();
			k--;
			top--;
			q.push(top);
		}
		
		int result = 0;
		while(q.size()>0){
			result += q.top()*q.top();
			q.pop();
		}
		
		cout<<result<<endl;
	}
}
