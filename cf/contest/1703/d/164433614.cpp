#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solution() { // JACK NGUYEN >:DDD
   int n; cin >> n; vector<string> s;
   map<string, bool> occ;
   for(int i=0;i<n;i++) {
      string x; cin >> x;
      s.push_back(x);
      occ[x]=1;
   }
   for(int i=0;i<n;i++) {
      int ok = 0;
      for(int j=1;j<=s[i].length()-1&& !ok;j++) {
         string prefix = s[i].substr(0,j),
                suffix = s[i].substr(j, s[i].length()-j+1);
         // cout << prefix << " " << suffix << "\n";
         if(occ[prefix] && occ[suffix]) ok=1;
      }
      cout << ok;
   }
   cout << "\n";

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}
