#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		queue<string> q;
		
		q.push("9");
		
		for(int i = 0;i<n;i++){
		
			string res = q.front();
			q.pop();
			
			long long tmp=0;
			for(int i=0;i<res.size();i++){
				tmp=10*tmp + (int)(res[i]-'0');
			}
			
			if(tmp%n==0){
				cout<<res;
				break;
			}
			
			string f1 = q.front();q.pop();
		
			string f2 = f1;
			
			q.push(f1.append("0"));
			q.push(f2.append("9"));
		}
		cout<<endl;
	}
}
