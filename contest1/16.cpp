#include<bits/stdc++.h>
using namespace std;
int n,s,a[11][11],cot[11],hang[11],dem=0,luu[100][11];
void tim(int i)
{
	for(int j=0;j<n;j++)
	{
		if(cot[j])
		{
			hang[i]=j;
			cot[j]=0;
			if(i==n-1)
			{
			 int temp=0;
			 for(int k=0;k<n;k++)
			  temp+=a[k][hang[k]];
			 if(temp==s)
			 {
			 	for(int k=0;k<n;k++)
			 	 luu[dem][k]=hang[k]+1;
			 	dem++;
			 }
			}
			else tim(i+1);
			cot[j]=1;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>s;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[i][j];
    		cot[j]=1;
    	}
	}
    tim(0);
	cout<<dem<<endl;
	for(int i=0;i<dem;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<luu[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
