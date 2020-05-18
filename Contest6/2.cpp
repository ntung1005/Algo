#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,x,a[100005],b[100005],index[100005];
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
			
			index[i]=i;
			b[i]=abs(x-a[i]);
			
		}
		
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(b[i]>b[j]){
					int temp = b[i];
					b[i]=b[j];
					b[j]=temp;
			
					int indexTemp = index[i];
					index[i]=index[j];
					index[j]=indexTemp;
				}
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<a[index[i]]<<" ";
		}
		
		cout<<endl;
	}
	
}
