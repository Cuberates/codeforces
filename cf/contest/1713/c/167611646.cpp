#include <bits/stdc++.h>

#define LL long long
#define PB push_back
#define DEBUG(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 1e5+1;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

vector<int> ans(MXN);

int recurse (int n) {
   if(n<=0) {
      ans[n] = 0;
      return 0;
   } else {
      int x;
      for(int k=0;k<=n;k++) {
         int temp = k + n;
         int root = sqrt(temp);
         root *= root;
         if(root == temp) x = k;
      }
      for(int i=n;i>=x;i--) {
         ans[i] = x + (n-i);
      }
      recurse(x-1);  
      return 0;
   }
}

void solution() { // JACK NGUYEN >:DDD
   int N;
   cin >> N;
   recurse(N-1);
   for(int i=0;i<N;i++) cout << ans[i] << " ";
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

