    #include <iostream>
    #include <algorithm>
    #include <minmax.h>
    #include <vector>
    #include <math.h>

    #define ll long long
    #define vint vector<int> 

    using namespace std;

    void solve() {
        ll n, mid, ans = 0;
        cin >> n;
        mid = floor(n/2);
        while (mid > 0 && n > 1) {
            ans += (4 * n - 4) * mid;
            n -= 2;
            --mid;
        }
        cout << ans << "\n";
    }

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);


        int t;
        cin >> t;
        while (t--) {
            solve();
        }
    }

   