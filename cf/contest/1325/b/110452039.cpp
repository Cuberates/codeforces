#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		set<int> ans;
		int n;
		cin >> n;
		for(int i=0;i<n;i++) {
			int a;
			cin >> a;
			ans.insert(a);
		}
		cout << ans.size() << "\n";
	}
	
	return 0;
}
