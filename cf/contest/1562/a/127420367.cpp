#include <bits/stdc++.h>

using namespace std;

int solve(){
	int l, r;
	cin >> l >> r;
	if(l<=(r/2)+1) cout << (r-1)/2 << "\n";
	else cout << r-l << "\n";
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}