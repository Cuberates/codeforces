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
   int avg = 0;
   map<int,int> occ;
   for(int i=0;i<n;i++) {
      int x; cin >> x;
      avg += x;
      occ[x]++;
   }
   if(avg % n != 0) cout << "NO \n";
   else if(occ[avg/n]<=0) cout << "NO \n";
   else cout << "YES \n";
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


