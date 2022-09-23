#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool ok=false;
		for(int i=1;i<s.length();i++) {
			if(s[i]==s[i-1]&&s[i]=='1') ok=true;
			if(ok&&s[i]==s[i-1]&&s[i]=='0') {
				cout << "NO \n";
				goto z;
			}
		}
		cout << "YES \n";
		z:;		
	}	
	return 0;
	
}
