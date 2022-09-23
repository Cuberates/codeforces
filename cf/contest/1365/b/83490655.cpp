        #include <iostream>
        #include <algorithm>
        #include <minmax.h>
        #include <vector>
        #include <math.h>

        #define ll long long
        #define vint vector<int> 

        using namespace std;
        
        int checksort(vint a) {
            vint f = a;
            sort(a.begin(), a.end());
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != f[i]) return 0;
            }
            return 1;

        }

        int check(vint a) {
            int t0 = 0, t1 = 0;
            for (int i = 0; i < a.size()-1; i++) {
                if (a[i] != a[i + 1]) return 0;
            }
            return 1;

            
        }
  
        void solve() {
            int n;
            cin >> n;
            vint a(n), b(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            for (int i = 0; i < n; i++) cin >> b[i];

            if (check(b) == 1) {
                if (checksort(a) == 1) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
            else cout << "YES" << "\n";
            
        }

        int main()  
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

            int t;
            cin >> t;
            while (t--) {
                solve();
            }


           
        }

   