#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k1, k2, w, b;
		cin >> n >> k1 >> k2 >> w >> b;
		
		int black = (2*n)-k1-k2, white = (2*n)-black;	
		if(black>=b*2&&white>=w*2) cout << "YES\n";
		else cout << "NO\n";
		
	}	
	return 0;
	
}
