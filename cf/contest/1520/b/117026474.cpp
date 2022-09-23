#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		int n, ans=0;
		cin >> n;
		for(int i=1;i<=n;i=i*10+1){
			for(int j=1;j<=9;j++) {
				if(i*j<=n) ans++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}