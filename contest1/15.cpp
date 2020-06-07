#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int sinh(char s[])
{
	int n=strlen(s)-2;
	while(n>=0&&s[n]>=s[n+1])n--;
	if(n<0) return 0;
	int k=strlen(s)-1;
	while(s[k]<=s[n])k--;
	int temp=s[k];
	s[k]=s[n];
	s[n]=temp;
	int l=n+1,r=strlen(s)-1;
	while(l<r)
	{
		temp=s[l];
		s[l]=s[r];
		s[r]=temp;
		l++;
		r--;
	}
	return 1;
}
main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int stt;
		char s[81];
		cin>>stt;
		cin.ignore();
		cin.getline(s,81);
		cout<<stt<<" ";
		if(sinh(s))
		{
			cout<<s<<endl;
		}
		else
		cout<<"BIGGEST"<<endl;
	}
}
