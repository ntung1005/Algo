#include <bits/stdc++.h>

using namespace std;

int t, tuso, mauso;

void xuli(int tuso, int mauso) {

	if(tuso==0) {
		cout<<0<<endl;
		return;
	}
	if(mauso % tuso == 0) {
		cout << "1/" << mauso/tuso<<endl;
		return;
	}
	int n = mauso / tuso + 1;
	cout << "1/" << n << " + ";
	xuli(tuso*n-mauso, mauso*n);
	
}

int main() {
	cin >> t;
	while(t--) {
		cin >> tuso >> mauso;
		xuli(tuso, mauso);
		cout << endl;
	}
	return 0;
}
