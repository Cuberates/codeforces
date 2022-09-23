#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e4;
int x[mxn], y[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int s, n;
	cin >> s >> n;
	for(int i=0;i<n;i++) {
		cin >> x[i] >> y[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(s>x[j]&&x[j]!=-1) {
				x[j]=-1;
				s+=y[j];
			}
		}
	}
	bool ok=true;
	for(int i=0;i<n&&ok;i++) {
		if(x[i]!=-1) ok=false;
	}
	cout << (ok?"YES \n":"NO \n");
}	