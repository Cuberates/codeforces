/* Solution by Jack Nguyen @ Cuberates */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case () {
   int n;
   cin >> n;
   string s; 
   cin >> s;
   map<char,int> occ;
   for(char k : s) {
      occ[k]++;
   }
   string comp = "Timur";
   int ok = 1;
   for(char k : comp) {
      if(occ[k]>=2 || occ[k]<=0) {
         ok = 0;
         break;
      }
   }
   
   if(ok && occ.size() == comp.length()) cout << "YES \n";
   else cout << "NO \n";
}


int main () {
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
   for(int i=0;i<tt;i++) {
      // cout << "TEST #" << i+1 << "-----" << "\n";
      test_case();
   }
}
