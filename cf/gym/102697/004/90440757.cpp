#include <iostream>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << 180 + 180 * (n-3) << "\n";
	}
}
