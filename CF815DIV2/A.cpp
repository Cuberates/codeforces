#include <bits/stdc++.h>

#define ll long long
#define ld long double

#define pb push_back
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rrep(i,x,y) for(int i=x;i>y;i--)
#define all(x) x.begin(), x.end()

#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

/*---------------- DEBUGGING -------------------*/
void _print(auto x) { cout << x << "\n"; }
void _print(vector<auto> x) { for(auto k : x) { cout << k << " "; } }
void _print(map<auto,auto> x) { for(auto k : x) { cout << x.first << " " << x.second << "\n"; } }
/*----------------------------------------------*/

void solution() { // JACK NGUYEN >:DDD
   ll a, b, c, d;
   cin >> a >> b >> c >> d;
      
   ll val1 = -1, val2 = -1;
   
   if(a % b == 0 && c % d == 0) {
      val1 = a/b;
      val2 = c/d;
   }
   if(val1 == val2) cout << 0 << "\n";
   else if(val1 == 0 || val2 == 0) cout << 1 << "\n";
   else if(max(val1, val2) % min(val1, val2) == 0) cout << 1 << "\n";
   else {
      // the value is the lcm of the two
      ll ans1, ans2;
      if(a==c) ans1 = 0;
      else if(min(a,c)==0) ans1=1;
      else if(max(a,c) % min(a,c) == 0) ans1 = 1;
      else ans1 = 2;

      if(b==d) ans2 = 0;
      else if(max(b,d) % min(b,d) == 0) ans2 = 1;
      else ans2 = 2;
      cout << ans1 + ans2 << "\n";
   }
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

