#include <iostream>
#include <vector>
#include <minmax.h>
#define vint vector<int>
#define end "\n"

using namespace std;

// Observation: x = |min(2, n-1) * m|

void solve(int n, int m) {
	cout << min(2, n - 1) * m << end;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		solve(n, m);
	}
}

