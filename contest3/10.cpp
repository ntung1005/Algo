#include <bits/stdc++.h>

using namespace std;

long int n;
long int l[1000000];

int main() {
	
	long int T;
	cin>>T;
	while(T--){
		long int OPT = 0;
		cin >> n;
		priority_queue<int, vector<int>, greater<int> > pg; // cau truc du lieu hang doi uu tien
		for(int i=0; i<n; i++) {
			long int a;
			cin >> a;
			pg.push(a); // day vao hang doi
		}
	
		while(pg.size() > 1) {
			long int first = pg.top(); pg.pop();
			long int second = pg.top(); pg.pop();
			OPT += first + second;
			pg.push(first + second);
		}
		cout << OPT<<endl;
	}
	
	return 0;
}
