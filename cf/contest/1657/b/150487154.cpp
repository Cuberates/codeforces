#include <bits/stdc++.h>

#define ll long long
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

void _print(int x){ cout << x; }
void _print(ll x){ cout << x; }
void _print(double x){ cout << setprecision(15) << x;}
void _print(string x){ cout << x; }
void _print(char x){ cout << x; }
void _print(vector<long long> x){ for(int i=0;i<x.size();i++){ cout << x[i] << " "; } }
void _print(vector<char> x){ for(char i : x){ cout << i << " "; } }
void _print(vector<string> x){ for(string i : x){ cout << i << " "; } }
void _print(vector<vector<int>> x) { for(int i=0;i<x.size();i++) { cout << "[" << i+1 << "] "; cout << "[ ";for(int j=0;j<x[i].size();j++) cout << x[i][j] << " "; cout << "] \n";} }
void _print(map<int,int> x) { for(auto item : x) cout << item.first << " " << item.second << "\n";}
int palindrome(string s) { string p = s; reverse(p.begin(), p.end()); if(s==p) return 1; else return 0;}
vector<vector<int>> perm(vector<int> x) { vector<vector<int>> permlist; do { permlist.push_back(x); } while (next_permutation(x.begin(), x.end())); return permlist; }

const int MXN = 1e5+69420, MOD = 1000000007;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // JACK NGUYEN >:DDD
	long long n, b, x, y;
	cin >> n >> b >> x >> y;
	vector<long long> a;
	a.push_back(0);
	n--; long long ans = 0, i=1;
	while(n>=0) {
		long long k = a[i-1];
		if(k+x<=b) a.push_back(k+x);
		else a.push_back(k-y);
		ans += a[i];
		i++;
		n--;
	}
	//debug(a);
	cout << ans << "\n";
}	

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	solution();
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
		//cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}

