#include<bits/stdc++.h>
using namespace std;
int n,s,t[30],so=30,sum=0,dem=0;
void tim(int i)
{
	for(int j=0;j<=1;j++)
	{
		if(sum<s&&dem<so)
		{
		 sum+=(t[i]*j);
		 dem+=j;
		 if(i==n-1)
		 {
			if(sum==s)so=dem;
		 } 
		 else tim(i+1);
		 sum-=(t[i]*j);
		 dem-=j;	
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>s;
	for(int i=0;i<n;i++)
	 cin>>t[i];
    tim(0);
	cout<<so;
	return 0;
}
