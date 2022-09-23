#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		int n, x=0, y=0;
		cin >> n;
		for(int i=0;i<n;i++) {
			int f;
			cin >> f;
			if(f%2==0&&i%2!=0) x++;
			else if(f%2!=0&&i%2==0) y++;
		}
		if(x==y) cout << x << "\n";
		else cout << "-1 \n";
	}
	
}
