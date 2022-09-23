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
   int l1, r1, l2, r2;
   cin >> l1 >> r1 >> l2 >> r2;
   // the minimum is max(l1, l2)
   if(max(l1, l2)>min(r1,r2)) cout << l1 + l2 << "\n";
   else cout << max(l1, l2) << "\n";
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


