#include <bits/stdc++.h>

#define LL long long
#define PB push_back
#define DEBUG(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 1e9;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // JACK NGUYEN >:DDD
   int n;
   cin >> n;
   vector<int> B;
   for(int i=0;i<n;i++) {
      int x; cin >> x;
      B.PB(x);
   }
   int m;
   cin >> m;
   vector<int> G;
   for(int i=0;i<m;i++) {
      int x; cin >> x;
      G.PB(x);
   }
   sort(B.begin(), B.end());
   sort(G.begin(), G.end());
   int ans = 0;
   for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
         int diff = abs(B[i] - G[j]);
         if(diff<=1) {
            ans++;
            G[j] = MXN;
            break;
         }
      }
   }
   cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
   // cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}

