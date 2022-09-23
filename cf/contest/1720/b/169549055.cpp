#include <bits/stdc++.h>

#define ll long long
#define ld long double

#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

void solution() { // JACK NGUYEN >:DDD
   int n;
   cin >> n;
   vector<int> a(n);
   for(int i=0;i<n;i++) {
      cin >> a[i];
   }
   sort(a.begin(), a.end());
   cout << (a[n-2] - a[0]) + (a[n-1] - a[1]) << "\n";
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

