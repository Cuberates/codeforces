#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int x, ans=0;
	cin >> x;
	while(x) {
		if(x&1==true) ans++;
		x>>=1;
	}
	cout << ans << "\n";

}	