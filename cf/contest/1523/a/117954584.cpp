#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string s, ans; bool ok=true;
		cin >> s;
		for(int i=0;i<m&&ok;i++) {
			ans = s;
			for(int j=0;j<n&&ok;j++) {
				if(s[j]=='0') {
					if(j==0) ans[0]=s[1];
					else if(j==n-1) ans[n-1]=s[n-2];
					else {
						if((s[j+1]=='1'&&s[j-1]=='0')||(s[j+1]=='0'&&s[j-1]=='1')) ans[j]='1';
					}
				}
			}
			if(ans==s) ok=false;
			else s = ans;
		}
		cout << s << "\n";
	}
}