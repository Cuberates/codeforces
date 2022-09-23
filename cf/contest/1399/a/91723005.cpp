#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(){
	int n, count = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	for(int i = 0; i < n-1; i++){
		if(abs(a[i]-a[i+1])<=1) a[i]=-1;
	}
	for(int i = 0; i < n; i++){
		if(a[i]>=0) count++;
	}
	if(count>1) cout << "NO" << "\n";
	else cout << "YES" << "\n";
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
