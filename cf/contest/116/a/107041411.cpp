#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, passenger=0, cap=0;
	cin >> n;
	for(int i=0;i<n;i++) {
		int en, ex;
		cin >> ex >> en;
		passenger+=en-ex;
		cap=max(cap, passenger);
	}
	
	cout << cap << "\n";
	
}
