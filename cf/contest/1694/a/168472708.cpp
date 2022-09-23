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
  int a, b;
  cin >> a >> b;
  int k = 0;
  while(true) {
    if(b<=0&&a<=0) break;
    else {
      if(k==0 && a>=1) {
        cout << 0;
        a--;
        k=1;
      
      } else k=1;
      if(k==1 && b>=1) {
        cout << 1;
        b--;
        k=0;
      } else k=0;
    }
  }
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

