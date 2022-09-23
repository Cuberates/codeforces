#include <iostream>
#include <vector>

#define vint vector<int>
#define ed "\n"
#define ll long long

using namespace std;
    
void solve(){
    int n;
    cin >> n;
    vint a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    for(int i = 0; i < n; i++){
        for(int e = 0; e < n - 1; e++){
            if(a[e] < a[e+1]){
                int b = a[e];
                a[e] = a[e+1];
                a[e+1] = b;
            }
        }
    }
    int ans = abs(a[0] - a[1]);
    for(int i = 0; i < n-1; i++){
        int df = abs(a[i] - a[i+1]);
        if (df < ans) ans = df;
    }
    
    cout << ans << ed;
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