#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vt vector
#define pb push_back
#define _max *max_element
#define _min *min_element
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define len length
#define str string

using namespace std;

int solve(){
	int N, minpos=0, maxpos=0;
	cin >> N;
	for(int i=0;i<N;i++) {
		int x;
		cin >> x;
		if(x==1) minpos=i+1; 
		if(x==N) maxpos=i+1;
	}

	int L = max(minpos, maxpos), R = max(N-minpos+1, N-maxpos+1), LR = minpos+N-maxpos+1, RL=maxpos+N-minpos+1;
	cout << min(L, min(R, min(LR, RL))) << "\n"; 

	return 0;
}

int main(){
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}