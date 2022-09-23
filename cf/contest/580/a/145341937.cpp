#include <bits/stdc++.h>
#define bigint long long
using namespace std;

const int MAX_N = 1e5, MOD = 1e9+7;
const double DX = 0.001, PI = 3.14, EULER = 2.71; 


void solution(){ // solution goes here
	// LIS jk
	int n, a[MAX_N];
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	
	int ans = 1, count = 1, cur = a[0];
	for(int i=1;i<n;i++) {
		if(cur <= a[i]) count++;
		else {
			ans = max(ans, count);
			count = 1;
		}
		cur = a[i];
	}
	ans = max(count, ans);
	cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	solution();	
//    int tc;
//    cin >> tc;
//    for(int i=0;i<tc;i++) {
//		cout << "-- TEST CASE #" << i << " -- \n";
//		solution();
//	 }
}

