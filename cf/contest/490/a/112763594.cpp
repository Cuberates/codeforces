#include <bits/stdc++.h>
#define uset unordered_set
#define vt vector

using namespace std;

int main(){
	int n;
	cin >> n;
	vt<int> a(n), x, y, z;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(a[i]==1) x.push_back(i+1);
		else if (a[i]==2) y.push_back(i+1);
		else z.push_back(i+1);
	}
	int f = min(x.size(), min(y.size(), z.size()));
	cout << f << "\n";
	for(int i=0;i<f;i++) {
		cout << x[i] << " " << y[i] << " " << z[i] << "\n";
	}
	return 0;
}
