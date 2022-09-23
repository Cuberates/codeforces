/* Solution by Jack Nguyen @ Cuberates
 *
 * The solution was created on 09 / 15 / 2022
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

char to_char (int k) {
   char res = char('a' + (k-1));
   return res;
}

void solution() {   
   int n; string s;
   cin >> n >> s;
   vector<char> ans;
   debug(to_char(10));
   for(int i=n-1;i>=0;i--) {
      if(s[i]=='0') {
         string prev; prev.push_back(s[i-2]); prev.push_back(s[i-1]); 
         char l = to_char (stoi(prev));
         ans.push_back(l);
         i-=2;
      } else {
         string prev; prev.push_back(s[i]);
         char l = to_char (stoi(prev));
         ans.push_back(l);
      }
   }
   reverse(ans.begin(), ans.end());
   for(auto &k : ans) cout << k;
   cout << "\n";
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

