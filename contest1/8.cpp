#include<iostream>
#include<iomanip>

using namespace std;

//Ban dau
void Tao(int a[],int &n){
	cin>>n;
	for(int i = 1;i<=n;i++){
		a[i] = n-i+1;
	}
}

//Sinh
void sinh(int a[],int n,int &ok){
	int i = n-1;
	while(i>0 && a[i] < a[i+1]) i--;
	if(i>0){
		int k =n;
		while(a[i]<a[k]) k--;
		int t = a[i]; a[i] = a[k]; a[k] = t;
		int r = i+1,s=n;
		while(r<=s){
			int tg = a[r]; a[r] = a[s]; a[s] = tg;
			r++;s--;
		}
	}
	else ok = 0;
}

//Xuat cau hinh hien tai
void xuat(int a[],int n){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}

void next(int a[],int n,int ok){
	while(ok){
		xuat(a,n);
		sinh(a,n,ok);
	}
}

int main (){
	
	int T;
	cin>> T;
	while(T--){
		int a[100],n,ok=1;
		Tao(a,n);
		next(a,n,ok);	
		cout<<endl;
	}
	
	return 0;
}
