#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; string s;
	cin >> n >> s;
	for(int i=0;i<n;i++) s[i]=tolower(s[i]);
	sort(s.begin(), s.end());
	int k=s[0], count=1;
	for(int i=0;i<n;i++) {
		if(s[i]!=k) {
			count++;
			k=s[i];
		}
	}
	cout << (count>=26?"YES":"NO") << "\n";
}
