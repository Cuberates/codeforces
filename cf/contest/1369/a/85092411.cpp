#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <numeric>

#define ll long long
#define vint vector<int>
#define vstring vector<string>
#define IOSTIE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 4 != 0) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}

int main()
{
    IOSTIE;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}


