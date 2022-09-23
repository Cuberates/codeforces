#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    while (n >= 1) {
        cout << "I hate ";
        n--;
        if (n == 0) break;
        else cout << "that ";
        cout << "I love ";
        n--;
        if (n == 0) break;
        else cout << "that ";
    }

    cout << "it";
    
    
}