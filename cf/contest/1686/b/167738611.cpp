#include <bits/stdc++.h>

#define LL long long
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 1e5+1;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution(){
   int n;
   cin >> n;
   vector<int> a;
   for(int i=0;i<n;i++) {
      int x; cin >> x;
      a.PB(x);
   }
   vector<int> seg;
   int cur = a[0];
   int seg_size = 1;
   for(int i=1;i<n;i++) {
      if(a[i]>=cur) {
         seg.PB(seg_size);
         cur = a[i];
         seg_size = 1;
      } else {
         seg_size++;
         cur = a[i];
      }
   }
   seg.PB(seg_size);
   //DEBUG(seg);
   // split the segments into pairs
   int ans = 0;
   for(int s : seg) {
      if(s<=1) continue; 
      else if(s % 2 == 0) ans += (s/2);
      else {
         ans += ((s-1)/2-1);
         ans ++;
      }
   }
   cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
   cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}


