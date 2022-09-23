#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t, a[100];
    cin >> t;
    while(t--) {
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	// the number of additions = the difference between a[i] and its nearest index
	// the answer = the maximum difference between a[i] and its nearest index
	int ans=0;
	for(int i=0;i<n;i++) {
	    int k;
	    if(a[i]<=(i+1)) k=0;
	    else k = a[i]-(i+1);
	    ans = max(ans, k);
	}
	cout << ans << "\n";
    } 
}
