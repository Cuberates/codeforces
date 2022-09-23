#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define vint vector<int>
#define ed "\n"
#define ll long long

using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if(a + c == b && a + c == d) cout << "YES" << ed;
    else if(b + d == a && b + d == c) cout << "YES" << ed;
    else if(a + d == b && a + d == c) cout << "YES" << ed;
    else if(b + c == d && b + c == a) cout << "YES" << ed;
    else cout << "NO" << ed;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}