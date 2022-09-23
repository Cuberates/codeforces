#include <iostream>

using namespace std;


int main()
{
	int n, e, f, a = 0, b = 0;
	cin >> n;

	while (n > 0) {
		cin >> e >> f;
		if (e > f) a++;
		else if (e < f) b++;
		n--;
	}
	
	if (a > b) cout << "Mishka";
	else if (a < b) cout << "Chris";
	else cout << "Friendship is magic!^^";
}