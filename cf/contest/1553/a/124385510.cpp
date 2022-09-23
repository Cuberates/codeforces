#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%10<=8) cout << n/10 << "\n";
        else cout << n/10+1 << "\n"; 
    }
}