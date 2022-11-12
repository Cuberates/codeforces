/* Solution by Jack Nguyen @ Cuberates
 * The solution was created on 11 / 07 / 2022
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

long long max_length (string s, char k) {
	long long res = -1;
	long long cnt = 0;
	for(int i=0;i<s.length();i++) {
		char x = s[i]; 
		if(x == k) cnt++;
		else {
			res = max(res, cnt);
			cnt = 0;
		}
		// debug(cnt);
	}
	res = max(res, cnt);
	return res;
}

void solution () {
	long long n; string s;
	cin >> n >> s;
	long long cnt1 = 0, cnt0 = 0;
	for(char &k : s) {
		if(k == '0') cnt0++;
		else cnt1++;
	}
	long long ans = cnt1 * cnt0;
	long long ans1 = pow(max_length(s, '0'), 2);
	long long ans2 = pow(max_length(s, '1'), 2);
	cout << max(ans, max(ans1, ans2)) << "\n";
	
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

