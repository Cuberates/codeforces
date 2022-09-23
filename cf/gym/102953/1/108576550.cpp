#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>

using namespace std;

int letters[8]; // c o d e r a m s

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; string s;
    cin >> n >> s;
    for(int i=0;i<n;i++) {
        if(s[i]=='c') letters[0]++;
        else if(s[i]=='o') letters[1]++;
        else if(s[i]=='d') letters[2]++;
        else if(s[i]=='e') letters[3]++;
        else if(s[i]=='r') letters[4]++;
        else if(s[i]=='a') letters[5]++;
        else if(s[i]=='m') letters[6]++;
        else if(s[i]=='s') letters[7]++;
        else continue;
    }
    
    cout << *min_element(letters, letters+8)  << "\n";
}