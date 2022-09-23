#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int k, r;
	cin >> k >> r;
	for(int i=1;i<=10;i++) {
		if((k*i)%10==0||(k*i)%10==r) {
			cout << i << "\n";
			break;
		}
	}
}
