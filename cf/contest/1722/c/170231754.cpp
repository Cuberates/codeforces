/* Solution by Jack Nguyen @ Cuberates */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case () {
   int n;
   cin >> n;
   vector<vector<string>> p(3);
   for(int i=0;i<3;i++) {
      for(int j=0;j<n;j++) {
         string s; cin >> s;
         p[i].push_back(s); 
      }
   }
   map<string, vi> occ;
   for(int i=1;i<=p.size();i++) {
      for(string k : p[i-1]) {
         occ[k].push_back(i);
      }
   }

   map<int, ll> points;

   for(int i=1;i<=3;i++) points[i]=0;

   for(auto x : occ) {
      int sz = x.second.size();
      if(sz == 1) points[x.second[sz-1]] += 3;
      else if(sz == 2) {
         for(int k : x.second) points[k]++;
      } else continue;
   }

   for(auto x : points) cout << x.second << " ";
   cout << endl;
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
