#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t;

void xuli() {
    int n; cin >> n; int count = 0; ll a;
    queue <string> q;
    q.push("1");
    while(!q.empty() ) {
        string a = q.front();
        q.pop();
       
       int tmp;
       for(int i=0;i<a.size();i++){
			int tmp=10*tmp + (int)(a[i]-'0');
		}
		
		if(tmp>n){
			break;
		}
       
        q.push(a+"0");
        q.push(a+"1");

    }
    cout << q.size()-1 << "\n";
}

int main() {
    cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}
