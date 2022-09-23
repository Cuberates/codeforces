#include <bits/stdc++.h>
#define uset unordered_set
#define vt vector
#define ll long long

using namespace std;

ll _sumDigit(ll n) {
	if(n==0) return 0;
	else return n%10 + _sumDigit(n/10);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		while(__gcd(n, _sumDigit(n))==1) {
			n++;
		} 
		cout << n << "\n";
	}

}