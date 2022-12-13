/* Solution by Jack Nguyen @ Cuberates
 * 11 / 13 / 2022
 * */

#include <bits/stdc++.h>

using namespace std;

void mySolution ();

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tt = 1; 
   cin >> tt; 
   for(int i=1;i<=tt;i++) {
  		mySolution ();
  	}
	return 0;
}

/* ---- SOLUTION GOES HERE ---- */

void mySolution () { 
	int n;
	cin >> n;
	string _ban = "BAN", temp = "";
	for(int i=0;i<n;i++) temp += "BAN";
	vector<pair<int,int>> answer;
	for(int i=0;i<temp.length();i++) {
		if(temp[i] == 'B') {
			for(int j=temp.length()-1;j>i;j--) {
				if(temp[j] == 'A') {
					swap(temp[i], temp[j]);
					answer.push_back ({i+1,j+1});
					break;
				}
			}
		} else continue;
	}
	cout << answer.size() << "\n";
	for(auto ans : answer) cout << ans.first << " " << ans.second << "\n";
	return;
}
