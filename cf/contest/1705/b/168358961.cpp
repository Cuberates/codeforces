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

void solution() { // JACK NGUYEN >:DDD
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++) {
    cin >> A[i];
  }
  // Preprocessing
  int start = 0;
  for(int i=0;i<N-1;i++) {
    if(A[i]>0) {
      // start = i;
      break;
    } else start++;
  }
  // debug(start); 
  ll occ = 0, ans = 0;
  for(int i=start;i<N-1;i++) {
    if(A[i]<=0) occ++;
    else ans += A[i];
  }
  cout << occ + ans << "\n";
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

