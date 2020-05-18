#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

struct TD{
	int hs,mu;
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector< vector<TD> > res;
		TD a[n],b[m];
		
		for(int i=0;i<n;i++){
			cin>>a[i].hs;
			a[i].mu=i;
		} 
		
		for(int i=0;i<m;i++){
			cin>>b[i].hs;
			b[i].mu=i;
		}
		
		for(int i=0;i<n;i++){
			vector<TD> tmp;
			for(int j=0;j<m;j++){
				tmp.push_back((a[i].hs*b[j].hs),(a[i].mu+b[j].mu));
			}
			
			res.push_back(tmp);
		}
		
		int mu=0;
		while(mu<m+n-1){
			bool ok =false;
			int hs = 0;
			for(int i=0;i<res.size();i++){
				for(int j=0;j<res[i].size();j++){
					if(res[i][j].mu==mu) hs+=res[i][j].hs;
				}
			}
			
			cout<<hs<<" ";
			mu++;
			
		}
		
		cout<<endl;
	}
	
	return 0;
}
