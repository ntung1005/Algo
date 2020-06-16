#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//int n,a[100];
//
//void Try(int i)
//{
//	for(int j = 0;j<=1;j++)
//	{
//		a[i] = j;
//		if(i==n)
//		{
//			for(int l=1;l<=n;l++)
//			{
//				if(a[l] == 0) cout<< 'A';
//				else cout << 'B';
//			}
//			
//			cout<<' ';
//		
//		}
//		else Try(i+1);
//	}
//}
//
//
//int main() {
//	
//	int T; 
//	cin>>T;
//	while(T--)
//	{
//		cin>>n;
//		Try(1);
//		cout<<endl;
//	}
//	
//	return 0;
//}

int n,A[100];

void xuat(){
	for(int i=1;i<=n;i++){
		if(A[i] == 0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}

void sinh(int &ok){
	int i =n;
	while(i>0 && A[i]==1) i--;
	A[i]=1;
	if(i>0){
		for(int j=i+1;j<=n;j++){
			A[j]=0;
		}
	}
	else {
		ok = 0;
	};
}

void next(int ok){
	for(int i=1;i<=n;i++) A[i] = 0;
	
	while(ok){
		xuat();
		sinh(ok);
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int ok=1;
		cin>>n;
		next(ok);
		cout<<endl;
	}
	return 0;
}
