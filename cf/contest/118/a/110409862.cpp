#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s, ans;
	cin >> s;
	
	for(int i=0;i<s.length();i++) {
		char k=tolower(s[i]);
		if(k=='a'||k=='o'||k=='y'||k=='e'||k=='u'||k=='i') continue;
		else {
			ans+='.';
			ans+=k;
		}
	}
	cout << ans << "\n";
	return 0;
}
