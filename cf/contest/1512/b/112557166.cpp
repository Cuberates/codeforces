#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

const int mxn = 400;
string s[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, loc[2][2]={{0, 0}, {0, 0}}, x=0, y=0; // 0 = i, 1 = j
		cin >> n;
		for(int i=0;i<n;i++) cin >> s[i];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(s[i][j]=='*') {
					loc[x][y]=i;
					loc[x][y+1]=j;
					x++;
				} else continue;
				
			}
		}	
		if(loc[0][0]==loc[1][0]) { // same row
			if(loc[0][0]>0) {
				s[loc[0][0]-1][loc[0][1]]='*';
				s[loc[1][0]-1][loc[1][1]]='*';
			} else {
				s[loc[0][0]+1][loc[0][1]]='*';
				s[loc[1][0]+1][loc[1][1]]='*';
			}
		} else if (loc[0][1]==loc[1][1]) { // same column
			if(loc[0][1]>0) {
				s[loc[0][0]][loc[0][1]-1]='*';
				s[loc[1][0]][loc[1][1]-1]='*';
			} else {
				s[loc[0][0]][loc[0][1]+1]='*';
				s[loc[1][0]][loc[1][1]+1]='*';
			}
		} else {
			if(loc[0][1]>loc[1][1]) { // different row different column
				int dif = abs(loc[0][1]-loc[1][1]);
				s[loc[0][0]][loc[0][1]-dif]='*';	
				s[loc[1][0]][loc[1][1]+dif]='*';
			} else {
				int dif = abs(loc[0][1]-loc[1][1]);
				s[loc[0][0]][loc[0][1]+dif]='*';	
				s[loc[1][0]][loc[1][1]-dif]='*';
			}
		}

		for(int i=0;i<n;i++) {
			cout << s[i] << "\n";
		}

	}

}