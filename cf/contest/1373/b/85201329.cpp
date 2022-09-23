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
    string n;
    cin >> n;
    int a = 0, b = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i]=='0') a++;
        else b++;
    }
    if(a==0 || b==0) cout << "NET" << "\n";
    else{
        if(min(a, b)%2==0) cout << "NET" << "\n"; 
        else cout << "DA" << "\n";
    }

}

int main() {
    IOS;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}
