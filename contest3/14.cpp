#include <bits/stdc++.h> 

using namespace std; 
  
// Tra ve vector cua c�c khoi ho�n hao duoc xu l� truoc
vector<string> preProcess(long long int n)
{ 
    vector<string> preProcessedCubes; 
    for (int i = 1; pow(i,3) <= n; i++) { 
        long long int iThCube = pow(i,3); 
  
        // convert the cube to string and push into 
        // preProcessedCubes vector 
        string cubeString = to_string(iThCube);
        preProcessedCubes.push_back(cubeString); 
    } 
    return preProcessedCubes; 
} 
  
/* Utility function for findLargestCube().  
   Returns the Largest cube number that can be formed */
string findLargestCubeUtil(string num,  
                    vector<string> preProcessedCubes) 
{ 
    // reverse the preProcessed cubes so that we  
    // have the largest cube in the beginning 
    // of the vector 
    reverse(preProcessedCubes.begin(), preProcessedCubes.end()); 
  
    int totalCubes = preProcessedCubes.size(); 
  
    // iterate over all cubes 
    for (int i = 0; i < totalCubes; i++) { 
        string currCube = preProcessedCubes[i]; 
  
        int digitsInCube = currCube.length(); 
        int index = 0; 
        int digitsInNumber = num.length(); 
        for (int j = 0; j < digitsInNumber; j++) { 
  
            // check if the current digit of the cube 
            // matches with that of the number num 
            if (num[j] == currCube[index])  
                index++; 
              
            if (digitsInCube == index)                  
                return currCube;             
        } 
    } 
  
    // if control reaches here, the its  
    // not possible  to form a perfect cube 
    return "-1"; 
} 
  
// wrapper for findLargestCubeUtil() 
void findLargestCube(long long int n) 
{ 
    // pre process perfect cubes 
    vector<string> preProcessedCubes = preProcess(n); 
  
    // convert number n to string 
    string num = to_string(n); 
  
    string ans = findLargestCubeUtil(num, preProcessedCubes); 
  
    cout << ans << endl; 
} 
  
// Driver Code 
int main() 
{ 
	int T;
	cin>>T;
	
	while(T--){
		long long int n; 
	    cin>>n;
	    findLargestCube(n); 
	}
  
    return 0; 
} 
