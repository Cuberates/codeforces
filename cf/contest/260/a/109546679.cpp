#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, n, f; bool ok=false;
    cin >> a >> b >> n;
    for(int i=0;i<10;i++) {
        if(((a*10)+i)%b==0) {
            f=i;
            ok=true;
            break;
        }
    }
    if(ok==true) {
        cout << a;
        cout << f;
        for(int i=0;i<n-1;i++) cout << 0;
    } else cout << -1 << "\n";

}   