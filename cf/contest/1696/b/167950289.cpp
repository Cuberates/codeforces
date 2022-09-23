#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

void solution(){
  int n;
  cin >> n;
  vector<int> occ;
  for(int i=0;i<n;i++) {
    int x; cin >> x;
    if(x==0) occ.pb(i);
  }
  int k = occ.size();
  if(k>=n) cout << 0 << "\n";
  else if(k<=0) cout << 1 << "\n";
  else if(k==1) {
    // check for edges
    if(occ[0]==0 || occ[0]==n-1) cout << 1 << "\n";
    else cout << 2 << "\n";
  } else {
    int gap = 0;
    for(int i=0;i<k-1;i++) {
      int dist = occ[i+1] - occ[i] + 1;
      if(dist >= 3) gap++;
    }
    if(occ[0]>0) gap++;
    if(occ[k-1]<n-1) gap++;
    if(gap<=1) cout << 1 << "\n";
    else cout << 2 << "\n";
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
}
