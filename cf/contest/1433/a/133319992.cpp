#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long 
#define vt vector

using namespace std;

void solve(){
    string x; bool ok=1;
    cin >> x;
    int ans=0; string compare="";
    for(int i=1;i<=(int)x[0]-48&&ok;i++) {
	for(int j=1;j<=4&&ok;j++) {
	    for(int k=0;k<j;k++) {
		//char h = (i+48);
		compare.push_back(i+48);
		ans++;
	    }
	    if(compare==x) {
		ok=0;
		break;
	    }
	    compare="";
	}
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--) solve();
    //return 0;
}
