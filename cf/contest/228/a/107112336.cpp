#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a[4], ans=0, k=a[0];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a, a+4);
	for(int i=0;i<4;i++) {
		if(a[i]==k) ans++;
		else k=a[i];
	}
	cout << ans << "\n";
}
