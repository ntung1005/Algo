#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<int> q;
		q.push(1);
		
		int result=0;
		
		while(q.front() <= n ){
			int top = q.front(); q.pop();
			result++;
			q.push(top*10);
			q.push(top*10+1);
		}
		
		cout<<result<<endl;
	}
	
	return 0;
}
