#include <bits/stdc++.h> 
  
using namespace std; 
  
int minCost(int arr[], int n) 
{ 
    
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + n); 
  
    int res = 0; 
  
    while (pq.size() > 1) { 
      
        int first = pq.top(); 
        pq.pop(); 
        int second = pq.top(); 
        pq.pop(); 
  
        res += first + second; 
        pq.push(first + second); 
    } 
  
    return res; 
} 

int main() 
{ 
	int len[100000],size;
	cin>>size;
	for(int i=0;i<n;i++){
		cin>>len[i];
	}
    int len[] = { 4 ,2 ,7 ,6 ,9 }; 
    int size = sizeof(len) / sizeof(len[0]); 
    cout << minCost(len, size)<<endl; 
    return 0; 
} 
