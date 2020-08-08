#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<string> q;
		int dem = 0;
		
		q.push("1");
		
		while(!q.empty()){
			string top = q.front();q.pop();
			
			cout<<top<<" ";
			dem++;
			if(dem == n) {
				break;
			}
			
			q.push(top+"0");
			q.push(top+"1");
			
			
		}
		
		cout<<endl;
	}
}
