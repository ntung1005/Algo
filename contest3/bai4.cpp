#include<bits/stdc++.h>
#define max 101
using namespace std;
int minSum(int a[],long n)
{
	sort(a,a+n);
	int num1=0;
	int num2=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			num1=num1*10+a[i];
		}
		else num2=num2*10+a[i];
	}
	return num2+num1;
}
int main()
{
	int a[max],t;
	long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<minSum(a,n)<<endl;
 
	}
	return 0;
}
