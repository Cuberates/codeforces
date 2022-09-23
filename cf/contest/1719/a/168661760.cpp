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


void solution() { // JACK NGUYEN >:DD
   int N,M;
   cin >> N >> M;
   int S = N+M;
   if(S%2==0) cout << "Tonya \n";
   else cout << "Burenka \n";
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

