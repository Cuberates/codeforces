/* Solution by Jack Nguyen @ Cuberates
 * The solution was created on 11 / 01 / 2022
 * */
#include <bits/stdc++.h>

using namespace std;

/* THE FOLLOWING CODE IS FOR DEBUGGING PURPOSES */ 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> 
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> 
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";} void _print() {cerr << "]\n";}
template <typename T, typename... V> 
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/* THE ABOVE CODE IS FOR DEBUGGING PURPOSES */ 

void solution () {
   int n;
   cin >> n;
   vector<long long> a(n), b(n);
   for(int i=0;i<n;i++) {
      cin >> a[i];
   }
   for(int i=0;i<n;i++) {
      cin >> b[i];
   }
   long long ans = 0; 
   int p1 = 0, p2 = n-1;
   while(p1 < p2) {
      if(b[p1]<b[p2]) {
         ans += a[p1];
         a[p1+1] = a[p1+1] + b[p1];
         p1++;
      } else {
         ans += a[p2];
         a[p2-1] = a[p2-1] + b[p2]; 
         p2--;
      }
   }
   ans += a[p1];
   cout << ans << "\n";
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
   cin >> tt;
	for(int i=0;i<tt;i++) {
      // cout << "-- TEST CASE #" << i << " ----- \n";
		solution();
	}
	return 0;
}

