#include<bits/stdc++.h>
using namespace std;
int n,day[1001];

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void xu_ly(){
	int i=n-1;
	while(i>0&&day[i]>=day[i+1])i--;
	if(!i){
		for(int j=1;j<=n;j++){
			day[j]=j;
		}
		return;
	}
	int vt_min=i+1;
	for(int j=i+1;j<=n;j++){
		if(day[j]<day[vt_min]&&day[j]>day[i]){
			vt_min=j;
		}
	}	
	swap(day[i],day[vt_min]);
	int l=i+1,r=n;
	while(l<=r){
		swap(day[l],day[r]);
		l++;
		r--;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>day[i];
		}
		xu_ly();
		for(int i=1;i<=n;i++){
			cout<<day[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
