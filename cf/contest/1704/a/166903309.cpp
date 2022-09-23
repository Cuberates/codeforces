#include <bits/stdc++.h>

#define ll long long
#define PB push_back

using namespace std;

const int MXN = 1e5;

void solution(){ // JACK NGUYEN
    int N, M;
    cin >> N >> M;
    string a, b;
    cin >> a >> b;
    if(N==M) {
        if(a==b) cout << "YES \n";
        else cout << "NO \n";
    } else if(N < M) cout << "NO \n";
    else {
        string s1 = a.substr(N-M+1, M-1);
        string s2 = b.substr(1, M-1);
        if(s1!=s2) cout << "NO \n";
        else {
            string s3 = a.substr(0, N-(M-1));
            int ok = 0;
            if(b[0]=='0') {
                for(char k : s3) {
                    if(k=='0') {
                        ok=1;
                        break;
                    }
                }
            } else {
                for(char k : s3) {
                    if(k=='1') {
                        ok=1;
                        break;
                    }
                }
            }
            if(ok) cout << "YES \n";
            else cout << "NO \n";
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tt = 1;
    cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
    }
}
