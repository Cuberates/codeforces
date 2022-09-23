#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

const int mxn = 100;
int a[mxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double n, m, a;
    cin >> n >> m >> a;
    cout << fixed << setprecision(0) << ceil(n/a) * ceil(m/a);
}