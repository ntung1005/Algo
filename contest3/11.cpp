#include <bits/stdc++.h>

using namespace std;

long int n;
long int l[2000000];

int main() {
	long int mod = pow(10,9)+7;
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
		OPT += first%mod + second%mod;
		pg.push(first%mod + second%mod);
	}
	
	cout << OPT%mod<<endl;
	
	return 0;
}
