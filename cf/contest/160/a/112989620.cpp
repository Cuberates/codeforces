#include <bits/stdc++.h>
using namespace std;

const int mxn = 100;
int a[mxn];

int _sum(int arr[], int a, int b) {
	int sum=0;
	for(int i=a;i<=b;i++) sum+=arr	[i];
	return sum; 
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a, a+n);
	int sum = 0, ans=0;
	for(int i=n;i>=0;i--) {
		if(_sum(a, 0, i)<sum) break;
		sum+=a[i];
		ans++;
	}
	cout << ans-1 << "\n";
}
	