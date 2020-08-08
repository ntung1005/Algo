#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1001];
	
void SinhTapConKeTiep(){
	int i = k;
	while(i>0 && a[i] == n-k+i) i--;
	if(!i){
		i = 1;
		a[i] = 1;
	}
	else a[i]++;
	
	for(int j = i+1;j<k;j++){
		a[j] = a[i] + j - i;
	}
}
	
int main(){
	int t;
	cin>>t;
	while(t--){

		cin>>n>>k;
		
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		
		SinhTapConKeTiep();
		
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
