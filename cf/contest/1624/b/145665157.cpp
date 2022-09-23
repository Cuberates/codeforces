#include <bits/stdc++.h>
#define ll long long
#define rep(x) for(int i=0;i<x;i++)
#define rrep(x) for(int i=x-1;i>=0;i--)
#define debug(x) cout << #x << ": "; _print(x); cout << endl;
using namespace std;
int test_case();
void _print(int x){ cout << x; }
void _print(ll x){ cout << x; }
void _print(double x){ cout << setprecision(15) << x;}
void _print(string x){ cout << x; }
void _print(char x){ cout << x; }
void _print(vector<int> x){ for(int i=0;i<x.size();i++){ cout << x[i] << " "; } }
void _print(vector<char> x){ for(char i : x){ cout << i << " "; } }
void _print(vector<string> x){ for(string i : x){ cout << i << " "; } }
// void _print(int x[]) {int n = sizeof(x[])/sizeof(x[0]); for(int i=0;i<n;i++) cout << x[i] << " ";}
void _print(vector<vector<int>> x) { for(int i=0;i<x.size();i++) { cout << "[" << i+1 << "] "; cout << "[ ";for(int j=0;j<x[i].size();j++) cout << x[i][j] << " "; cout << "] \n";} }
void _print(map<int,int> x) { for(auto item : x) cout << item.first << " " << item.second << "\n";}
int palindrome(string s) { string p = s; reverse(p.begin(), p.end()); if(s==p) return 1; else return 0;}
vector<vector<int>> perm(vector<int> x) { vector<vector<int>> permlist; do { permlist.push_back(x); } while (next_permutation(x.begin(), x.end())); return permlist; }

const int MXN = 1e5+69420;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // CUBERATES - THE WORST PROGRAMMER OF ALL TIME
	ll a, b, c;
	cin >> a >> b >> c;
	
	int m1 = 2*b-c;///a;
	int m2 = (a+c);//(2*b);
	int m3 = (2*b-a);//c;

	int count = 0;
	if(m1<=0||m1%a!=0) count++;
	if(m2<=0||m2%(2*b)!=0) count++;
	if(m3<=0||m3%c!=0) count++;

	if(count>=3) cout << "NO \n";
	else cout << "YES \n";	

	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin >> tc;
	int i=0;
	while(tc--) {
		// cout << "TEST CASE #" << i+1 << ":\n"; // For debugging purposes
		solution();
		i++;
	}
	return 0;
}
