#include <bits/stdc++.h>
#define ll long long
#define vt vector

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> _even, _odd;
		for(int i=0;i<n;i++) {
			int a;
			cin >> a;
			if(a%2==0) _even.push_back(a);
			else _odd.push_back(a);
		}
		for(int i=0; i<_even.size();i++) cout << _even[i] << " ";
		for(int i=0; i<_odd.size();i++) cout << _odd[i] << " ";
		cout << "\n";
	}
}