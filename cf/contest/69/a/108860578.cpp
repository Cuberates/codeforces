#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x=0, y=0, z=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a, b, c;
        cin >> a >> b >> c;
        x+=a; y+=b; z+=c;
    }
    if(x==0&&y==0&&z==0) cout << "YES \n";
    else cout << "NO \n";
}