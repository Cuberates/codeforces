#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, ans=-1;
		cin >> n;
		vt<int> a(n);
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-2&&ans==-1;i++) {
			if(a[i]!=a[i+1]) {
				if(a[i+1]==a[i+2]) ans=i+1;
				else ans=i+2;
			}
			else if(a[i]!=a[i+2]) {
				if(a[i+1]==a[i+2]) ans=i+1;
				else ans=i+3;
			}
		}
		cout << ans << "\n";
	}

}