#include <bits/stdc++.h>

using namespace std;

void _print0(char k, int n){
	cout << k;
	for(int i=0;i<n;i++) cout << 0;
	cout << " ";
}

void solve(){
	string s;
	cin >> s;
	int count=0;
	for(int i=0;i<s.length();i++) if(s[i]!='0') count++;
	cout << count << "\n";
	for(int i=0;i<s.length();i++) {
		if(s[i]!='0') _print0(s[i], s.length()-1-i);
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) solve();
}