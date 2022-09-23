#include <bits/stdc++.h>

using namespace std;

const int mxn = 1000;
int a[mxn];

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n; 
		bool ok=false;
		int ans1, ans2, ans3;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=1;i<n-1;i++) {
			if(a[i]>a[i-1]&&a[i]>a[i+1]) {
				ans1=i; ans2=i+1; ans3=i+2;
				ok=true;
				break;
			}
		}
		if(ok) cout << "YES \n"<< ans1 << " " << ans2 << " " << ans3 << "\n";
		else cout << "NO \n"; 
	}
}