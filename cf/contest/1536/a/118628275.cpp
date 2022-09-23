#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vt vector
#define pb push_back
#define _max *max_element
#define _min *min_element
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define len length

using namespace std;

const int mxn = 1e5;

int solve(){
	int N;
	cin >> N;
	vt<int> a;
	bool ok=true;
	for(int i=0;i<N;i++) {
		int x;
		cin >> x;
		if(x<0) ok=false;
		a.pb(x);
	}
	if(!ok) cout << "NO \n";
	else {
		cout << "YES \n";
		sort(a.begin(), a.end());
		vt<int>::iterator it;
		for(int i=0;i<a[N-1];i++) {
			it=find(a.begin(), a.end(), i);
			if(it==a.end()) a.push_back(i);
		}
		cout << a.size() << "\n";
		for(int i=0;i<a.size();i++) cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}

int main(){
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}