#include <iostream>
#include <algorithm>
#include <minmax.h>
#include <vector>
#include <math.h>

#define ll long long
#define vint vector<int> 

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << min(pow(max(2 * a, b), 2), pow(max(2 * b, a), 2)) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}

   