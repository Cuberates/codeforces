#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> a) {
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}

int solve(vector<int> a) {
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 0) {
			a[i]++;
			ans++;
		}
	}
	if (sum(a) == 0) {
		ans++;
		return ans;
	}
	return ans;

}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			a[i] = k;
		}
		cout << solve(a) << "\n";
	}

}

