#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

void _print(int x){ cout << x; }
void _print(ll x){ cout << x; }
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

const int MXN = 2*1e5;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

int cur_ans = 0;

void sol(int start, int target, int k) {
   if(start==target) {
      cur_ans ++;
      cur_ans %= 998244353;
   }
   else if(start > target);// do nothing
   else {
      for(int i=target;i>=1;i--) {
         if(i%k==0 && i>=0) {
            sol(start + i, target, k+1);
         }
      }
   }
}

void solution() { // JACK NGUYEN >:DDD
   int N, K;
   cin >> N >> K;
   vector<int> ans;
   for(int x=1;x<=N;x++) {
      sol(0, x, K);
      ans.pb(cur_ans);
      cur_ans = 0;
   }
   for(int x : ans) cout << x << " ";
   cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
   //cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
	//	cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}
