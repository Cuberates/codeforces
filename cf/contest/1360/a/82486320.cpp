#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

#define vint vector<int>
#define ed "\n"
#define ll long long

using namespace std;

//W: 2w; H: 2h

void solve(){
    int a, b, d1, d2;
    cin >> a >> b;
    cout << pow(min(max(2*a, b), max(2*b, a)), 2) << ed;
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