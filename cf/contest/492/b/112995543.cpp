#include <bits/stdc++.h>
using namespace std;

const int mxn = 1000;
double lantern[mxn+2];

int main(){
	int n, l;
	cin >> n >> l;
	lantern[0]=0;
	lantern[n+1]=l;
	for(int i=1;i<n+1;i++) cin >> lantern[i];
	sort(lantern, lantern+n+2);
	double d=0;
	for(int i=1;i<n;i++) d=max(d, abs(lantern[i]-lantern[i+1]));
	double ans = max(d/2, max(lantern[1], l-lantern[n]));
	cout << fixed << setprecision(10) << ans << "\n";
}
