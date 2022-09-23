#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case() {
   ll n, m, sx, sy, d;
   cin >> n >> m >> sx >> sy >> d;
   ll top = sx - 1;
   ll bottom = n - 1 - top;
   ll left = sy - 1;
   ll right = m - 1 - left;

   if(top <= d && left <= d) cout << -1 << "\n";
   else {
      if(top > d && right > d) cout << abs(1-n) + abs(1-m);
      else if(left > d && bottom > d) cout << abs(1-n) + abs(1-m);
      else cout << -1;
      cout << endl;
   }
}

int main() {
   cin.tie(0)->sync_with_stdio(0);
   cin.exceptions(cin.failbit);
   int tt = 1;
   cin >> tt;
   for(int i=0;i<tt;i++) test_case();
}
