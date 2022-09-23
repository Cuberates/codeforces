#include <bits/stdc++.h>

using namespace std;

int home[30], guest[30];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, ans=0;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> home[i];
		cin >> guest[i];
	}
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(i!=j&&home[i]==guest[j]) ans++;
		}
	}
	
	cout << ans << "\n";
}
