#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<int> q;
		int dem = 0;
		
		q.push(1);
		
		while(!q.empty()){
			int top = q.front();q.pop();
			
			if(top > n) {
				break;
			}
			
			q.push(top*10+0);
			q.push(top*10+1);
			
			
		}
		
		cout<<q.size()<<endl;
	}
}
