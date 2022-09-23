#include <bits/stdc++.h>
#define ll long long
#define pb push_back

typedef std::vector<int> v_int;

using namespace std;

const int mxn = 1e5;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int N; string S;
		cin >> N >> S;
		string ans;
		for(int i=0;i<N;i++) {
			if(S[i]=='D') ans.pb('U');
			else if(S[i]=='U') ans.pb('D');
			else if(S[i]=='L') ans.pb('L');
			else ans.pb('R');
		}
		cout << ans << "\n";
	}
}