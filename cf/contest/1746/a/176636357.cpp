#include <bits/stdc++.h>

using namespace std;

int main () {
   int t; cin >> t;
   for(int i=0;i<t;i++) {
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      int count1 = 0;
      for(int &k : a) {
         cin >> k;
         if(k) count1++;
      }
      if(!count1) cout << "NO \n";
      else cout << "YES \n";
   }
}
