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

void solution() {
   string s;
   cin >> s;
   int n = s.length();
   if(n%2==0) n/=2;
   else n = (n+1)/2;
   int ans = 1;
   for(int i=0;i<n;i++) {
      if(s[i]!=s[n+i]) {
         ans = 0;
         break;
      }
   }
   if(ans) cout << "YES \n";
   else cout << "NO \n";
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


