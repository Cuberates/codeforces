#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n; string s;
		cin >> n >> s;
		int c1=0, c2=0;
		for(int i=0;i<n;i++) {
			if(s[i]=='0') c1++;
			else c2++;
		}
		if(c1==1) cout << "BOB \n";
		else if(c1%2==0) cout << "BOB \n";
		else cout << "ALICE \n";
	}
	return 0;
}


