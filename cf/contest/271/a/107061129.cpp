#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int y;
	cin >> y;
	
	while(true) {
		y++;
		int a=y/1000, 
		b=y/100 % 10,
		c=y/10 % 10,
		d=y%10;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) break;
	}
	cout << y << "\n";
		
}
