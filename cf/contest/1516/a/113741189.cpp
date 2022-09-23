#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

const int mxn = 100;
int a[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++) {
			while(a[i]>0&&k>0) {
				a[i]--;
				a[n-1]++;
				k--;
			}
		}
		for(int i=0;i<n;i++) cout << a[i] << " ";
		cout << "\n";

	}
	
}