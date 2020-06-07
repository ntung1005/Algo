#include<bits/stdc++.h>
using namespace std;
int n,k,m=0,a[1000][15],b[15];

int check()
{
  int dem=0;
  for(int i=0;i<n;i++)
  {
   if(!b[i])
   {
   	 int d=i; 
     while(i<n&&!b[i])i++;
     if(i-d>k)return 0;
	 if(i-d==k)dem++;	
   }	
  }
  if(dem==1)return 1;
  return 0;	
}

void tim(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n-1)
		{
			
		   if(check())
			{
				for(int k=0;k<n;k++)
				 a[m][k]=b[k];
				m++;
			}
		}
		else tim(i+1);
	}
}

int main()
{
	cin>>n>>k;
	tim(0);
	cout<<m<<endl;
	for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 		if(a[i][j]==0)cout<<'A';
	 		else cout<<'B';
	 	}
		cout<<endl;
	 }
   return 0;
}
