#include <iostream>
#include <vector>
#include <minmax.h>
#define vint vector<int>
#define end "\n"

using namespace std;

// Number of lights needed = size / 2;
// If size mod 2 != 0 then it's either short on 1 square so it's safe to add 1; 

void solve(int n, int m) {
	if (n % 2 == 0 || m % 2 == 0) cout << n * m / 2 << endl;
	else cout << (n * m + 1) / 2 << end;
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

