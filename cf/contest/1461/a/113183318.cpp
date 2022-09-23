#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k; string f="bca";
		cin >> n >> k;
		for(int i=0;i<k;i++) cout << "a";
		for(int i=0, j=0;i<n-k;i++){
			if(j>2) j=0;
			cout << f[j];
			j++;
		}
		cout << "\n";
	}
}