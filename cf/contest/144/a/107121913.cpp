#include <bits/stdc++.h>

using namespace std;

const int mxn = 100;
int a[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	int mn=a[0], mx=a[n-1], x=0, y=n-1;
	for(int i=0;i<n;i++) {
		if(a[i]<mn) {
			mn=a[i];
			x=i;	
		} 
		else if (a[i]==mn) x=max(x, i);
	}
	for(int i=0;i<n;i++) {
		if (a[i]>mx){
			mx=a[i];
			y=i;
		} 
		else if (a[i]==mx) y=min(y, i);
	}
 	// cout << x << " " << y << "\n";
    if(x<y) cout << y+abs(n-1-x)-1 << "\n";
	else cout << y+abs(n-1-x);
}
