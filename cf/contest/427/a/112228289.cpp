#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, count=0, ans=0;
	cin >> n;
	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		if(a>0) count+=a;
		else {
			if(count==0) ans++;
			else count--;
		}
	}
	cout << ans << "\n";	
}