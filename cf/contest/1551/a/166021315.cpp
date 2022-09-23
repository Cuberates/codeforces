#include <bits/stdc++.h>

#define ll long long
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

const int MXN = 1e5+69420;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() { // JACK NGUYEN >:DDD
	int n;
	cin >> n;
	int c21 = n/3, 
		c11 = n-(2*c21	);
	int c12 = n/3,
		c22 = (n-c12)/2;
	int A = abs(c21 - c11), B = abs(c22-c12);
	if(A<=B) {
		int test = c11 + 2*c21;
		if(test==n) cout << c11 << " " << c21 << "\n";
		else cout << c12 << " " << c22 << "\n";
	} else {
		int test = c12 + 2*c22;
		if(test!=n) cout << c11 << " " << c21 << "\n";
		else cout << c12 << " " << c22 << "\n";
		
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
    cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		//cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}
