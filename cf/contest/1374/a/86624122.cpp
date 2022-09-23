#include <iostream>

using namespace std;

void solve(int x, int y, int n){
	if (n-n%x+y <= n) cout << n-n%x+y << "\n";
	else cout << n-n%x-(x-y) << "\n";
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int x, y, n;
		cin >> x >> y >> n;
		solve(x, y, n);
	}
	
	
}