#include <bits/stdc++.h>

#define LL long long
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

const int MXN = 1e5+1;
const double DX = 0.000000001, PI = 3.14159265358979, EULER = 2.718281828459045;

void solution() {
   map<int,int> winning;
   for(int i=0;i<10;i++) {
      int x;
      cin >> x;
      winning[x]++;
   }
   int n;
   cin >> n;
   vector<int> ans;
   for(int i=0;i<n;i++) {
      int lucky = 0;
      int count = 0;
      for(int j=0;j<6;j++) {
         int x; 
         cin >> x;
         if(winning[x]>=1) count++;
         if(count>=3) lucky = 1;
      }
      ans.PB(lucky);
   }
   for(int x : ans) {
      if(x==1) cout << "Lucky \n";
      else cout << "Unlucky \n";
   }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
   // cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}


