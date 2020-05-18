#include<bits/stdc++.h>
using namespace std;

int F[1005][25005],N,V,A[1005];

int tinh(){
	int i,j;
	for(i=0;i<=N;i++){
		F[i][0]=0;
	}
	for(i=0;i<=V;i++){
		F[0][i]=0;
	}
	
	for(i=1;i<=N;i++){
		for(j=1;j<=V;j++){
			F[i][j]=F[i-1][j];
			if(j>=A[i]){
				F[i][j]=max(F[i-1][j-A[i]]+A[i],F[i][j]);
			}
		}
	}
	
	return F[N][V];
}

int main(){
	int i;

	cin>>V>>N;
	for(i=1;i<=N;i++) cin>>A[i];

	cout<<tinh()<<endl;

}
