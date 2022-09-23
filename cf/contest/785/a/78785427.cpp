#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n, f = 0;
    string e;
    cin >> n;

    while(n > 0) {
        cin >> e;
        if (e == "Tetrahedron") {
            f += 4;
        }
        else if (e == "Cube") {
            f += 6;
        }
        else if (e == "Octahedron") {
            f += 8;
        }
        else if (e == "Dodecahedron") {
            f += 12;
        }
        else {
            f += 20;
        }
        n--;
    }

    cout << f;
    
    
    
}