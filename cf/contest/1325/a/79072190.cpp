#include<iostream> 

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << 1 << " " << n - 1 << "\n"; 
        // Since GCD(A, B) + LCM(A, B) = A + B (Always)
    }
}