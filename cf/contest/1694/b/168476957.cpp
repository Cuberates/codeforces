#include <bits/stdc++.h>

#define ll long long
#define ld long double

#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 2*1e5+1;

void solution() { // JACK NGUYEN >:DDD
  long long N;
  cin >> N;
  string S;
  cin >> S;
  // At least N substrings
  long long DP[MXN];
  memset(DP,0,sizeof(DP));
  DP[1]=1;
  for(int i=2;i<=N;i++) {
    if(S[i-1]!=S[i-2]) DP[i] = i + DP[i-1];
    else DP[i] = 1 + DP[i-1];
  }
  cout << DP[N] << "\n";
  
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

