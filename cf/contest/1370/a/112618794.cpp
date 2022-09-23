#include <bits/stdc++.h>
#define ll long long
#define vt vector

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, ans=0;
		cin >> n;
		for(int i=1;i<n;i++) {
			if(i*2<=n) {
				ans = max(ans, __gcd(i, i*2));
			}
		}

		cout << ans << "\n";
	}

}