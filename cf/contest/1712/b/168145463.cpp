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
   vector<int> a;
   for(int i=1;i<=n;i++) a.pb(i);
   if(n%2==0) {
      for(int i=0;i<n;i+=2) swap(a[i], a[i+1]);
   } else {
      for(int i=1;i<n;i+=2) swap(a[i], a[i+1]);
   }
   for(int x : a) cout << x << " ";
   cout << "\n";
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

