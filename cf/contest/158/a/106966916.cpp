#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e5;
int a[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, k, ans=0;
	cin >> n >> k;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) {
		if(a[i]>=a[k-1]&&a[i]>0) ans++;
	}
	cout << ans << "\n";
	
}
