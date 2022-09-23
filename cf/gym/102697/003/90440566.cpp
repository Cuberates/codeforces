#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, n, sum = 0;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n;
		sum += n*3; 
	}
	cout << sum;
}
