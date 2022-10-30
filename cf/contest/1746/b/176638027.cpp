#include <bits/stdc++.h>

using namespace std;

int main () {
   ios_base::sync_with_stdio(NULL);
   cin.tie(0);
   int t; cin >> t;
   for(int i=0;i<t;i++) {
      int n;
      cin >> n;
      vector<int> a(n);
      int c1 = 0, c0 = 0;
      for(int &k : a) {
         cin >> k;
         if(k) c1++;
         else c0++;
      }
      int ans = 0;
      for(int i= n-1;i>=0 && c1>0;i--) { // O(n);
         if(a[i]) c1--;
         else {
            c1--;
            ans++;
         }
      }
      cout << ans << "\n";
   }
}
