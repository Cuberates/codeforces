#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

// Start time: f(i) = X*i;
// Finish time: f(i)+t; 

const int mxn = 2e9;

// Arithmetic progression formula: 1+2+3+...+N = N(N+1)/2

void solve(){
	ll N, X, T;
	cin >> N >> X >> T;
	
	if(X>T) cout << 0 << "\n";
	else {
		// Find disatisfaction when the first player finishes
		// Disatisfaction Max = T/X;
		ll dis0MAX = T/X;
		if(dis0MAX>=N) {
			dis0MAX-=(dis0MAX-(N-1));
			cout << dis0MAX*(dis0MAX+1)/2 << "\n";
		} else {
			ll dis1 = ((dis0MAX-1)*dis0MAX/2);
			dis0MAX*=(N-dis0MAX);
			cout << dis1+dis0MAX << "\n";
			
		}
	}
	
}
	

int main(){	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
