#include <bits/stdc++.h>
#include <windows.h>
#define ll long long
#define cls system("cls");
// x = width, y = height

using namespace std;

bool isPa(string s){
	for(int i=0;i<s.length();i++) if(s[i]!=s[s.length()-1-i]) return false;
	return true;
}

bool alla(string s) {
	for(int i=0;i<s.length();i++) if(s[i]!='a') return false;
	return true;
}

void solve(){
	string s;
	cin >> s;
	if(alla(s)==true) cout << "NO \n";
	else {
		cout << "YES \n";
		if(isPa(s+'a')==true) cout << 'a'+s << "\n";
		else cout << s+'a' << "\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) solve();

}