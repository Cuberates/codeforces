#include <bits/stdc++.h>
#define uset unordered_set
#define vt vector
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vt<int> a, b; uset<int> dup;
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			if(dup.find(x)==dup.end()) {
				a.push_back(x);
				dup.insert(x);
			} else b.push_back(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for(int i=0;i<a.size();i++) cout << a[i] << " ";
		for(int i=0;i<b.size();i++) cout << b[i] << " ";
		cout << "\n";
	}
 

}