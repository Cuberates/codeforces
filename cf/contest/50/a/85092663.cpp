#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <numeric>

#define ll long long
#define vint vector<int>
#define vstring vector<string>
#define IOSTIE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    IOSTIE;

        int n, m;
        cin >> n >> m;
        if ((n * m) % 2 == 0) cout << (n * m) / 2 << "\n";
        else cout << ((n * m) + 1) / 2 - 1 << "\n";

    
}


