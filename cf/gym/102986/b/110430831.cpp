#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int mxn = 50;
int ratings[mxn]; string food[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n, x, ans=0;
	cin >> n >> x;
	for(int i=0;i<x;i++){
		if(n==0) break;
		else {
			ans++;
			n/=2;
		}
	}
	cout << ans << "\n";
}
