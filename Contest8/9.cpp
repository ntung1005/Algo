#include<bits/stdc++.h> 
using namespace std; 

struct node 
{ 
    int val; 
    int level; 
}; 

int minOperations(int x, int y) 
{ 
    set<int> visit; 
  
    queue<node> q; 
    node n = {x, 0}; 
    q.push(n); 
  
    while (!q.empty()) 
    { 
        node t = q.front(); 
        q.pop(); 
  
        if (t.val == y) 
            return t.level; 
  
        visit.insert(t.val); 
  
        if (t.val*2 == y || t.val-1 == y) 
            return t.level+1; 
  
        if (visit.find(t.val*2) == visit.end()) 
        { 
            n.val = t.val*2; 
            n.level = t.level+1; 
            q.push(n); 
        } 
        if (t.val-1>=0 && visit.find(t.val-1) == visit.end()) 
        { 
            n.val = t.val-1; 
            n.level = t.level+1; 
            q.push(n); 
        } 
    } 
} 

int main() 
{ 
int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
	    cout << minOperations(x, y)<<endl; 
	}
	
    return 0; 
} 
