#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void test_case() {
   string s1, s2;
   cin >> s1 >> s2;
   set<char> occ; 
   occ.insert(s1[0]);
   occ.insert(s1[1]);
   occ.insert(s2[0]);
   occ.insert(s2[1]);
   if(occ.size()==1) cout << 0 << "\n";
   else if(occ.size()==2) cout << 1 << "\n";
   else if(occ.size()==3) cout << 2 << "\n";
   else cout << 3 << "\n";
}

int main() {
   cin.tie(0)->sync_with_stdio(0);
   cin.exceptions(cin.failbit);
   int tt = 1;
   cin >> tt;
   for(int i=0;i<tt;i++) test_case();
}
