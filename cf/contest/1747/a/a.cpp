/* Solution by Jack Nguyen @ Cuberates
 * 11 / 13 / 2022
 * */

#include <bits/stdc++.h>

using namespace std;

void mySolution ();

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tt = 1; 
   cin >> tt; 
   for(int i=1;i<=tt;i++) {
  		mySolution ();
  	}
	return 0;
}

/* ---- SOLUTION GOES HERE ---- */

void mySolution () { 
	long long n;
	cin >> n;
	vector<long long> a (n);
	for(auto &k : a) cin >> k;
	long long ans = 0;
	for(auto &k : a) ans += k; 
	cout << abs (ans) << "\n";	
}
