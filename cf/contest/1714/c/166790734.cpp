#include <bits/stdc++.h>

#define ll long long
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

int make_val (string S) {
    int val = stoi(S);
    return val;
}

string min_val (string A, string B) {
    int valA = make_val (A);
    int valB = make_val (B);
    if(valA <= valB) return A;
    else return B;
}

int valid (string S) {
    map<char, int> occ;
    for(char k : S) {
        occ[k]++;
        if(occ[k]>=2) return 0;
    }
    return 1;
}

void solution(){
    int N;
    cin >> N;
    string DP[46];
    for(int i=0;i<=N;i++) DP[i] = "999999999";
    DP[0] = "";
    for(int i=1;i<=N;i++) {
        for(int k=1;k<=9;k++) {
            if(i-k>=0) {
                string ans = (char)(k+'0') + DP[i-k];
                // Check if ANS has repeated characters
                if(valid(ans)) {
                    DP[i] = min_val (DP[i], ans);
                } else continue;
            } else continue;
        }
    }
    cout << DP[N] << "\n";
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
