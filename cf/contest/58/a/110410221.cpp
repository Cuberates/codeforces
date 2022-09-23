#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s;
	cin >> s;
	string c="hello"; int count=0;
	for(int i=0,j=0; i<s.length();i++) 
		if(s[i]==c[j]) {
			count++;
			j++;
		}
	
	if(count>=5) cout << "YES \n";
	else cout << "NO \n";
	return 0;
}
