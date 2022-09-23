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

    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a, a+n);
    for(int i=0;i<n;i++) cout << a[i] << " ";

}