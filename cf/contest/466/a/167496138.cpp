#include <bits/stdc++.h>
#define LL long long
#define PB push_back
#define DEB(x) cout << #x << ": "; _print(x); cout << endl;
using namespace std;
void _print(int x){ cout << x; }
void _print(LL x){ cout << x; }
void _print(double x){ cout << setprecision(15) << x;}
void _print(string x){ cout << x; }
void _print(char x){ cout << x; }
void _print(vector<int> x){ for(int i=0;i<x.size();i++){ cout << x[i] << " "; } }
void _print(vector<char> x){ for(char i : x){ cout << i << " "; } }
void _print(vector<string> x){ for(string i : x){ cout << i << " "; } }
void _print(vector<vector<int>> x) { for(int i=0;i<x.size();i++) { cout << "[" << i+1 << "] "; cout << "[ ";for(int j=0;j<x[i].size();j++) cout << x[i][j] << " "; cout << "] \n";} }
void _print(map<int,int> x) { for(auto item : x) cout << item.first << " " << item.second << "\n";}
int palindrome(string s) { string p = s; reverse(p.begin(), p.end()); if(s==p) return 1; else return 0;}
vector<vector<int>> perm(vector<int> x) { vector<vector<int>> permlist; do { permlist.push_back(x); } while (next_permutation(x.begin(), x.end())); return permlist; }

const int MXN = 1000;

const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // JACK NGUYEN >:DDD
   int n, m, a, b;
   cin >> n >> m >> a >> b;
   // COST = k1 * a + k2 * b
   int ans = pow(MXN, 2)+1;
   for(int k1=0;k1<=MXN;k1++) {
      for(int k2=0;k2<=MXN;k2++) {
         int tickets = k1 + (k2 * m);
         int cost = (k1 * a) + (k2 * b);
         if(tickets >= n) ans = min(ans, cost);
      }
   }
   cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tt = 1; 
   // cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}
