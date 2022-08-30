#include <bits/stdc++.h>

#define LL long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 1e5+69420;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // JACK NGUYEN >:DDD
   int n;
   cin >> n;
   vector<int> a(n);
   for(int i=0;i<n;i++) {
      cin >> a[i];
   }
   // remove the higher ones
   int last = a[n-1], k = -1;
   map<int,int> pref, suff;
   for(int i=n-1;i>=0;i--) {
      if(a[i] > last) {
         k = i+1;
         break;
      } else {
         last = a[i];
         pref[last]++;
      }
   }
   if(k==-1) cout << 0 << "\n";
   else {
      for(int i=0;i<k;i++) suff[a[i]]++;
      int ans = suff.size();
      // find the largest element that is present in both
      int largest = -1;
      for(auto x : pref) {
         if(suff[x.first]) largest = max(largest, x.first);
      }
      if(largest==-1) cout << ans << "\n";
      else {
         for(auto x : pref) {
            if(suff[x.first]<=0 && x.first < largest) ans++; 
         }
         cout << ans << "\n";
      }
   }

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

