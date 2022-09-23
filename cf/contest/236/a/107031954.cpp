#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int count=1; char k = s[0];
	for(int i=0;i<s.length();i++) {
		if(s[i]!=k) {
			count++;
			k=s[i];
		}
	}
	cout << (count%2==0?"CHAT WITH HER!":"IGNORE HIM!");
}
