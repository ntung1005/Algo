#include <bits/stdc++.h> 
using namespace std; 
  
void showstack(stack <int> s) 
{ 
	
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<" ";
	}
	
//    while (!s.empty()) 
//    { 
//        cout << s.top()<<" "; 
//        s.pop(); 
//    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <int> s; 
    s.push(10); 
    s.push(30); 
    s.push(20); 
    s.push(5); 
    s.push(1); 
  
    cout << "The stack is : "; 
    showstack(s); 
  
    cout << "\ns.size() : " << s.size(); 
    cout << "\ns.top() : " << s.top(); 
  
  
    cout << "\ns.pop() : "; 
    s.pop(); 
    showstack(s); 
  
    return 0; 
} 
