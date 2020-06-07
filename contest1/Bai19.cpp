#include <iostream>
#define MAX 100
using namespace std; 

int X[MAX], n;

// Nhap
void Init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>X[i];
	}
}

// Xuat
void Result(){
	cout<<"[";
	for(int i=1;i<=n;i++){
		cout<<X[i];
		if(i<n){
			cout<<" ";
		}
	}
	cout<<"]"<<endl;
}

// Xu ly diau kien
void Try(){
	while(n>0){
		Result();
		for(int i=1;i<n;i++){
			X[i]+=X[i+1];
		}		
		n--;
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		Init();
		Try();
	}
	return 0;
}
