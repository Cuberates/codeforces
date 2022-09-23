#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    cin >> s; 
    char k=s[0]; int count=0; bool isOk=true;
    for(int i=0;i<s.size();i++) {
        if(s[i]!=k) {
            count=1;
            k=s[i];
        } else count++;
        if(count>=7) {
            isOk=false;
            break;
        }
    }
    if(count>=7) cout << "YES \n";
    else cout << (isOk?"NO":"YES") << "\n";
}