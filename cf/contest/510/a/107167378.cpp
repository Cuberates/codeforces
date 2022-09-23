#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int r, c;
	cin >> r >> c;
	for(int i=1;i<=r;i++) {
		if(i%2!=0) {
			for(int j=0;j<c;j++) cout << "#";
			cout << "\n";
			continue;
		} else if(i%2==0&&i%4!=0) {
			for(int j=0;j<c-1;j++) cout << ".";
			cout << "# \n";
			continue;
		} else {
			cout << "#";
			for(int j=0;j<c-1;j++) cout << ".";
			cout << "\n";
			continue;
		}
	}
}
