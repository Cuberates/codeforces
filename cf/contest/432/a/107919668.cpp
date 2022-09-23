#include <bits/stdc++.h>

using namespace std;

const int mxn = 2000;
int a[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, k, ans=0;
	cin >> n >> k;
	for(int i=0;i<n;i++) 
		cin >> a[i];
	sort(a, a+n);
	for(int i=n-1;i>=0;i--) 
		if(a[i]<=5-k) {
			ans = (i+1)/3;
			break;
		}
	cout << ans << "\n";
			
	
	
}
