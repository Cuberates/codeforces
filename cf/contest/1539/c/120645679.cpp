#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

const int mxn = 200000;
ll a[mxn], cap[mxn];

// For debugging purposes: cout << "CODE STILL WORKS OH MY GAWD!!!! \n";

void solve(){
	ll N, K, X;
	cin >> N >> K >> X;
	rep(i,0,N-1) cin >> a[i];
	if(N==1) cout << "1 \n";
	else {
		sort(a,a+N);
		ll prev=a[0], cur=0;
		rep(i,1,N-1) {
			if(a[i]-prev>X){
				ll dif = a[i]-prev;
				if(dif%X==0) cap[cur]=(dif/X)-1;
				else cap[cur]=dif/X;
				prev=a[i];
				cur++;
			} 
			prev=a[i];
		}
		ll ans = cur+1;
		sort(cap, cap+cur);
		rep(i,0,cur){
			if(K>0&&K>=cap[i]&&ans>1) {
				K-=cap[i];
				ans--;
			} else break;
		}
		cout << ans << "\n";
	}
	
}

int main(){
	solve();
	return 0;
}
