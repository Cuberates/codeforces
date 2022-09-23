#include <bits/stdc++.h>
using namespace std;

const int mxn = 100;
int a[mxn];


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	

	int n, _max, ans=0;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	_max = *max_element(a, a+n);
	for(int i=0;i<n;i++) ans+=_max-a[i];
	cout << ans << "\n";

}

