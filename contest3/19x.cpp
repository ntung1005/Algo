// C++ program to print a fraction in Egyptian Form using Greedy 
// Algorithm 
#include <iostream> 
using namespace std; 
  
void printEgyptian(long int nr,long int dr) 
{ 
    if (dr == 0 || nr == 0) 
        return; 
  
    if (dr%nr == 0) 
    { 
        cout << "1/" << dr/nr; 
        return; 
    } 
  
    if (nr%dr == 0) 
    { 
        cout << nr/dr; 
        return; 
    } 
  
    if (nr > dr) 
    { 
        cout << nr/dr << " + "; 
        printEgyptian(nr%dr, dr); 
        return; 
    } 
  
    long int n = dr/nr + 1; 
    cout << "1/" << n << " + "; 
  
    printEgyptian(nr*n-dr, dr*n); 
 } 
  
int main() 
{ 
	long int T;
	cin>>T;
	while(T--){
		long int nr , dr; 
	    cin>>nr>>dr;
	    printEgyptian(nr, dr); 
	    cout<<endl;
	}
	
	return 0;
    
}
