#include <iostream>
#include <string>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, fx=0, fy=0, ans=0; string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		if(s[i]=='U') fx++;
		else fy++;	
		if(fx==fy) {
			if(s[i+1]=='R'&&s[i]=='R') ans++;
			if(s[i+1]=='U'&&s[i]=='U') ans++;
			else continue;
		}
	}
	cout << ans;
}
