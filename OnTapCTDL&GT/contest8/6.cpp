#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<int> q;
		q.push(9);
		
		while(q.front() % n !=0 ){
			int top = q.front(); q.pop();
			q.push(top*10);
			q.push(top*10+9);
		}
		
		cout<<q.front()<<endl;
	}
	
	return 0;
}
