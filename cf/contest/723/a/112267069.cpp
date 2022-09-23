#include <bits/stdc++.h>
using namespace std;

using namespace std;

int a[3];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	

	for(int i=0;i<3;i++) cin >> a[i];
	sort(a, a+3);
	cout << a[2]-a[1] + a[1]-a[0] << "\n";
}

