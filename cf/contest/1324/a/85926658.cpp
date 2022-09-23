#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define vint vector<int>
#define ll long long 

using namespace std;

string solve() {
	int n;
	cin >> n;
	vint a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int m = a[0];
	for (int i = 0; i < n; i++) m = max(a[i], m);
	for (int i = 0; i < n; i++) {
		while (a[i] != m) {
			a[i] += 2;
			if (a[i] > m) return "NO";
		}
	}
	return "YES";
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << "\n";
	}
}
