#include <bits/stdc++.h>
#define uset unordered_set
#define vt vector

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, up=0, down=0, confused=0;
		cin >> n;
		for(int i=0;i<n;i++) {
			int a;
			cin >> a;
			if(a==1) up++;
			else if(a==2) down++;
			else confused++;
		}
		cout << up+confused << "\n";

	}



}
