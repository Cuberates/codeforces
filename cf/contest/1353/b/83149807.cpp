#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define vint vector<int>
#define ll long long
 
using namespace std;

int sum(vint a){
    int ans = 0;
    for(int i = 0; i < a.size(); i++) ans+=a[i];
    return ans;
}

int solve(){
    int n, k, ans = 0;
    cin >> n >> k;
    vint a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if (a[0] >= b[n-1]) return sum(a);
    else {
        for(int i = 0; i < n; i++){
            if(i < k){
                for(int e = 0; e < n; e++) {
                    if(a[i] < b[n-1-e]) swap(a[i], b[n-1-e]);
                    else continue;
                }
            }
            else return sum(a);
        }
    }
    return sum(a);
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