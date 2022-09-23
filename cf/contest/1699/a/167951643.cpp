#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

void solution(){
  int n;
  cin >> n;
  // a = b = c -> sum = 3a
  if(n%2!=0) cout << -1 << "\n";
  else cout << n/2 << " " << 0 << " " << 0 << "\n";
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
}

// 6 ro
