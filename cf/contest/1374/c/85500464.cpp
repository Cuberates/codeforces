#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define ed "\n"
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void solve(){
    int n, f=0, ans=0; string t;
    cin >> n;
    cin >> t;
    for(int i = 0; i < n; i++){
        if(t[i]=='(') f++;
        else f--;
        if(f<0){
            f=0;
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
