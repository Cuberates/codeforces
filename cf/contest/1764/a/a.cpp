/* Solution by Jack Nguyen @ Cuberates
 * 12 / 09 / 2022
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
   int N;
   cin >> N;
   vector<int> A(N);
   for(int &k : A) cin >> k;
   cout << 1 << " " << N << "\n";   

}
