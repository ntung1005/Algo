#include <bits/stdc++.h> 
using namespace std; 
  
int toIntNumber(char ch) 
{ 
    return (ch - '0'); 
} 
  
int sumOfSubstrings(string num) 
{ 
    int n = num.length(); 
  
    int sumofdigit[n]; 
  
    sumofdigit[0] = toIntNumber(num[0]); 
    int res = sumofdigit[0]; 
  
    for (int i = 1; i < n; i++) { 
        int numi = toIntNumber(num[i]); 
  
        sumofdigit[i] = (i + 1) * numi + 10 * sumofdigit[i - 1]; 
  
        res += sumofdigit[i]; 
    } 
  
    return res; 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		string num; 
		cin>>num;
	    cout << sumOfSubstrings(num) << endl; 
	}
        return 0; 
} 
