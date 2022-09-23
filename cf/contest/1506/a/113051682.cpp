#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		long long n, m, x;
		cin >> n >> m >> x;
		long long row = (x-1)%n, col = (x-1)/n;
		cout << row*m+col+1 << "\n";;
	}
}


// row = (x-1)%n
// col = (x-1)/n
// num = row * m + col + 1	