#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define vint vector<int>
#define ed "\n"
#define ll long long
 
using namespace std;
 
int solve(){
    int n, ans = 0;
    cin >> n;
    vint a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = n-1; i >= 0; i--) {
        if(a[i] <= i+1) {
            ans = i+2;
            return ans;
        }
    }

    return ++ans;
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
 
    
 
}