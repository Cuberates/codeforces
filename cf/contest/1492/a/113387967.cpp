#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		long long p, a, b, c;
		cin >> p >> a >> b >> c;
		if(p%a==0||p%b==0||p%c==0) cout << 0 << "\n";
		else cout << min({a-p%a, b-p%b, c-p%c}) << "\n";

	}
}	