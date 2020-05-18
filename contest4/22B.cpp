// Code from https://nguyenvanhieu.vn
 
#include <bits/stdc++.h>

using namespace std;
 
// Hàm tìm ki?m nh? phân s? d?ng gi?i thu?t d? quy
int binarySearch(int arr[], int n, int x) {
  int r = n - 1; // ch? s? ph?n t? cu?i
  int l = 0; // Ch? s? ph?n t? d?u tiên
  while (r >= l) {
    int mid = l + (r - l) / 2; // Tuong duong (l+r)/2 nhung uu di?m tránh tràn s? khi l,r l?n
 
    // N?u arr[mid] = x, tr? v? ch? s? và k?t thúc.
    if (arr[mid] == x)
      return mid;
 
    // N?u arr[mid] > x, c?p nh?t l?i right
    if (arr[mid] > x)
      r = mid - 1;
    // N?u arr[mid] < x, c?p nh?t l?i left
    if (arr[mid] < x)
      l = mid + 1;
  }
 
  // N?u không tìm th?y
  return -1;
}
 
int main() {
	
	int T;
	cin>>T;
	while(T--){
		int arr[1000000];
		int n,x;
		
		cin>>n>>x;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		int result = binarySearch(arr, n, x);
		if (result == -1)
		    cout<<"NO"<<endl;
		else
			cout<<result<<endl;
	}
	
  
  return 0;
}
