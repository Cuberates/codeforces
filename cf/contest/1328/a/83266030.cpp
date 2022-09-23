#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define vint vector<int>
#define ll long long
 
using namespace std;

void solve(){
    ll a, b, ans = 0;
    cin >> a >> b;
    if(a%b == 0) cout << 0 << "\n";
    else cout << b - a%b << "\n";
    
    

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