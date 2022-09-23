#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool _isSquare(int n) {
	if(floor(sqrt(n))*floor(sqrt(n))==n) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ans = false;
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			if(_isSquare(x)==false) ans = true;
		}
		cout << (ans?"YES\n":"NO\n");
	}

}