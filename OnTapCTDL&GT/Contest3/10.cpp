#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<int,vector<int>,greater<int>> q;
		
		for(int i=0;i<n;i++){
			int so;
			cin>>so;
			q.push(so);
		}
		
	int result = 0;
		while(q.size()>1){
			
			int f = q.top();q.pop();
			int s = q.top();q.pop();
			
			int tmp = f+s;
			result += tmp;
			
			q.push(tmp);
		}
		

		cout<<result<<endl;
	}
}
