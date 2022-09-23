#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

#define ll long long
#define vint vector<int>
#define vstring vector<string>
#define IOSTIE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    string n;
    cin >> n;
    if (n.length() <= 2) cout << n << "\n";
    else {
        cout << n[0] << n[1];
        for (int i = 3; i < n.length(); i += 2) cout << n[i];
        
    }
    cout << "\n";

}

int main()
{
    IOSTIE;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }


    
    
}


