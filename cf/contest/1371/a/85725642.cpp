#include <iostream>
 
using namespace std;
 
void solve(){
    int n, ans=1;
    cin >> n;
    if(n%2==0){
        for(int i=0;i<n/2 -1;i++) ans++;
    } else {
        for(int i=0;i<(n+1)/2-1;i++) ans++;
    }
    cout << ans << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}