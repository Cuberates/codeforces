/* Solution by Jack Nguyen @ Cuberates
 * 11 / 13 / 2022
 * */

#include <bits/stdc++.h>

using namespace std;

void mySolution ();

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int tt = 1; 
   cin >> tt; 
   for(int i=1;i<=tt;i++) {
  		mySolution ();
  	}
	return 0;
}

/* ---- SOLUTION GOES HERE ---- */

void mySolution () { 
	int n;
   cin >> n;
   vector<int> a(n);
   for(int &k : a) cin >> k; 
   int minSuffix = *min_element (a.begin(), a.end()); 
   if(minSuffix == a[0]) cout << "Bob \n";
   else cout << "Alice \n";
	return;
}
