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

int FIND_DIFF_HOUR (int start, int end) {
    int res = 0;
    while(start != end) {
        res++;
        start++;
        if(start > 23) start = 0;
    }
    return res;
}

int FIND_DIFF_MIN (int start, int end) {
    return end - start;
}

void solution() { // JACK NGUYEN >:DDD
    int N, H, M;
    cin >> N >> H >> M;
    // vector<int TIME[2]> DIFF_TIME;
    int ANSH = MXN, ANSM = MXN;
    for(int i=0;i<N;i++) {
        // int INP[2];
        int HOUR, MINUTE;
        cin >> HOUR >> MINUTE;
        int DIFF_HOUR = FIND_DIFF_HOUR(H, HOUR);
        int DIFF_MIN = FIND_DIFF_MIN(M, MINUTE);
        if(DIFF_MIN < 0) {
            DIFF_MIN += 60;
            DIFF_HOUR--;
        }
        if(DIFF_HOUR < 0) {
            DIFF_HOUR += 24;
        }
        if(DIFF_HOUR < ANSH) {
            ANSH = DIFF_HOUR;
            ANSM = DIFF_MIN;
        } else {
            if(DIFF_HOUR == ANSH) {
                if(DIFF_MIN < ANSM) {
                    ANSH = DIFF_HOUR; 
                    ANSM = DIFF_MIN;
                } else continue;
            } else continue;
        }
    }
    cout << ANSH << " " << ANSM << "\n";

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
}
