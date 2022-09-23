#include <iostream>
using namespace std;
int main()
{
	int w, h, k, ans = 0;
	cin >> w >> h >> k;
	for (int i = 0; i < k; i++) {
		ans += 2 * (w + h - 2);
		w -= 4;
		h -= 4;
	}
	cout << ans;
	
}