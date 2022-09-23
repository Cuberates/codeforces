#include <bits/stdc++.h>
using namespace std;

const int mxn = 100;
string a[100];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
		
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	if(n%2==0) {
		for(int i=0;i<n/2;i++) swap(a[i], a[n-i-1]);
	} else {
		for(int i=0;i<(n-1)/2;i++) swap(a[i], a[n-i-1]);
	}
	for(int i=0;i<n;i++) cout << a[i] << "\n";
 
}
