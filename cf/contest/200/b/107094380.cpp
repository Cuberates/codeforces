#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	double n, x, ans;
	cin >> n;
	for(int i=0;i<n;i++) {
		int p;
		cin >> p;
		ans+=p;
		x+=100;
	}
	cout << setprecision(15) << ans/x*100 << "\n";
	
}
