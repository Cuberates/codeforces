/* Solution by Jack Nguyen @ Cuberates */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case () {
   int n;
   cin >> n;
   string s1, s2;
   cin >> s1 >> s2;
   for(int i=0;i<n;i++) {
      if(s1[i] == 'G') s1[i] = 'B';
      if(s2[i] == 'G') s2[i] = 'B';
   }
   if(s1 == s2) cout << "YES \n";
   else cout << "NO \n";
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
