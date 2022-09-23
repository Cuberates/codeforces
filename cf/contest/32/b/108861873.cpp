#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, ans;
    cin >> s;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='-') {
            if(s[i+1]=='-') ans.push_back('2');
            else if(s[i+1]=='.') ans.push_back('1');
            i+=1;
        }
        else ans.push_back('0');
    }

    cout << ans << "\n";
}