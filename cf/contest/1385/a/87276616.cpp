#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

void solve(){
	vector<int> a(3);
	for(int i = 0; i < 3; i++) cin >> a[i];
	sort(a.begin(), a.end());
	if(a[1] != a[2]) cout << "NO \n";
	else cout << "YES \n" << a[0] << " " << a[0] << " " << a[2] << "\n";
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
