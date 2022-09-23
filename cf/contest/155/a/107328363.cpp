#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, t, ans=0;
	cin >> n >> t;
	int mx=t, mn=t;
	for(int i=0;i<n-1;i++) {
		int f;
		cin >> f;
		if(f>mx) {
			ans++;
			mx=f;
		} else if (f<mn) {
			ans++;
			mn=f;
		}
	}
	cout << ans << "\n";
}
