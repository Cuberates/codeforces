#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

bool find(int n, vt<int> s){
	for(int i=0;i<2;i++) if(n==s[i]) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while(T--) {
		vt<int> s(4), _h(2);
		cin >> s[0] >> s[1] >> s[2] >> s[3];
		vt<int> _s = s;
		sort(_s.begin(), _s.end());
		_h[0]=_s[2];
		_h[1]=_s[3];
		if(find(max(s[0], s[1]), _h)&&find(max(s[2], s[3]), _h)) cout << "YES \n";
		else cout << "NO \n";

	}

}