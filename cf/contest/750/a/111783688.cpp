#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n, k, ans=0;
	cin >> n >> k;
	k=4*60-k;
	for(int i=1;i<=n;i++) {
		if(5*i<k) {
			ans++;
			k-=5*i;
		} else if (5*i==k) {
			++ans;
			break;
		} else break;
	}
	cout << ans << "\n";
	
	return 0;
}
