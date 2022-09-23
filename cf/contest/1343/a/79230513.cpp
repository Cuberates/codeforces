#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int k = 2; k <= 29; k++) {
            int e = pow(2, k) - 1;
            if (n % e == 0) {
                cout << n / e << "\n";
                break;
            }
        }
    }
        
}

