#include<bits/stdc++.h>
using namespace std;
long long so,n,temp;
void tim(int i)
{
	for(int j=0;j<=1;j++)
	{
		if(so%n!=0)
		{
		 temp=temp*10+j*9;
		 if(i==20)
		 {
			if(temp&&temp%n==0)so=temp;
		 }
		 else tim(i+1);
		 temp=(temp-j*9)/10;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		so=9;
		temp=0;
		tim(0);
		cout<<so<<endl;
	}
	return 0;
}
