#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e6;
int dp[mxn+1], step[]={1, 2, 3, 4, 5};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int x;
	cin >> x;
	fill(dp,dp+x+1, mxn+1);
	dp[0]=0;
	for(int i=1;i<=x;i++) {
		for(int j=0;j<5;j++) {
			if(step[j]<=i) dp[i]=min(dp[i], dp[i-step[j]]+1);
		}
	}
	cout << dp[x];
		
}
