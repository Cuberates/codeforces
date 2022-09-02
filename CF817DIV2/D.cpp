/* Solution by Jack Nguyen @ Cuberates */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case () {
   int N; string S;
   cin >> N >> S;
   vector<ll> ans;
   
   // Optimal: LLLLRRRR

   for(ll x : ans) cout << x << " ";
   for(int i = ans.size(); i < N; i++) cout << ans[ans.size()-1] << " ";
   cout << "\n";
}

int main() {
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
   for(int i=0;i<tt;i++) {
      // cout << "TEST #" << i+1 << "-----" << "\n";
      test_case ();
   }
}
