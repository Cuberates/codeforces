#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e6;
int a1[mxn], a2[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string f = s1+s2;
	
	if(s3.length()!=f.length()) cout << "NO \n";
	else {
		sort(f.begin(), f.end()); sort(s3.begin(), s3.end());
		fill(a1, a1+mxn, 1); fill(a2, a2+mxn, 1);

		char k=f[0], t=s3[0]; int x=0, y=0; 
		for(int i=0;i<f.length();i++) {
			if(f[i]!=k) {
				x++;
				k=f[i];
			} else a1[x]++;
			if(s3[i]!=t) {
				y++;
				t=s3[i];
			} else a2[y]++;
		}
//		for(int i=0;i<x+1;i++) {
//			cout << a1[i] << " " << a2[i] << "\n";
//		}
		
		bool ok=true;
		for(int i=0;i<mxn;i++) {
			if(a1[i]!=a2[i]) {
				ok=false;
				break;
			}
		}
		cout << (ok?"YES":"NO") << "\n";
	}
	
}
