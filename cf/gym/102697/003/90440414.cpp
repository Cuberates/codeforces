#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, sum = 0;
	cin >> t;
	vector<int> a(t);
	for(int i = 0; i < t; i++) {
		cin >> a[i];
		sum += a[i]*3;
	}
	cout << sum;
}
