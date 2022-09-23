/* Solution by Jack Nguyen @ Cuberates
 * The solution was created on 09 / 04 / 2022
 * */
#include <bits/stdc++.h>

using namespace std;

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

void solution() { 
   int N, M;
   cin >> N >> M;
   vector<vector<int>> grid(N);
   for(int i=0;i<N;i++) {
      for(int j=0;j<M;j++) {
         int x; cin >> x;
         grid[i].push_back(x);
      }
   }
   // find the coordinate of the maximum element
   int max_x = 1, max_y = 1, cur_max = grid[0][0];
   for(int i=0;i<N;i++) {
      for(int j=0;j<M;j++) {
         int val = grid[i][j];
         if(val > cur_max) {
            max_x = i+1;
            max_y = j+1;
            cur_max = val; 
         }
      }
   }
   int top = max_x; 
   int bottom = N - max_x + 1; 
   int left = max_y;
   int right = M - max_y + 1;

   cout << max(top, bottom) * max(left, right) << "\n";
}

int main(){
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

