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

const int MXN = 1e5+1;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

vector<int> ans(MXN);

void solution() {
   int n;
   cin >> n;
   vector<int> ans;
   map<int,int> occ;
   cout << 2 << "\n";
   for(int i=1;i<=n;i++) {
      int j_max = floor(log(n/i)/log(2)+1);
      for(int j=1;j<=j_max;j++) {
         int k = i * pow(2, j-1);
         if(occ[k]<=0) {
            ans.PB(k);
            occ[k]++;
         }
      }
   }
   for(int k : ans) cout << k << " ";
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

