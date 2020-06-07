#include<iostream>

using namespace std;
int day[1001],n,m;

void xu_ly(){
	int i=m;
	while(i>0&&day[i]==n-m+i)i--;
	if(!i){
		i=1;
		day[i]=1;
	}
	else day[i]++;
	for(int j=i+1;j<=m;j++){
		day[j]=day[i]+j-i;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>day[i];
		}
		xu_ly();
		for(int i=1;i<=m;i++){
			cout<<day[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
