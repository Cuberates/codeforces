#include <bits/stdc++.h>
#define uset unordered_set
#define vt vector

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		if(k>n-k-1	) cout << -1 << "\n";
		else {
			vt<int> ans;
			for(int i=1;i<=n;i++) ans.push_back(i);
			for(int i=n-1;i>0&&k>0;i--) {
				swap(ans[i], ans[i-1]);
				i-=1;
				k--;
			}
			for(int i=0;i<n;i++) cout << ans[i] << " ";
			cout << "\n";
		}
	}
}
