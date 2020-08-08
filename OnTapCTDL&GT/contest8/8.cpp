#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		
		queue<int> q;
		q.push(n);
		
		int result = 0;
		
		while(q.front() != m ){
			result++;
			int top = q.front(); q.pop();
			q.push(top-1);
			q.push(top*2);
			
		} 
		
		cout<<result<<endl;
	}
	
	return 0;
}
