#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int mxn = 50;
int ratings[mxn]; string food[mxn];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> food[i] >> ratings[i];
	
	int x=0, y=0, l=ratings[0], r=ratings[0];
	for(int i=0;i<n;i++) {
		if(ratings[i]<l){
			x=i;
			l=ratings[i];
		} 
		if(ratings[i]>r){
			y=i;
			r=ratings[i];
		}
	}
	cout << food[x] << " " << food[y] << "\n";
}
