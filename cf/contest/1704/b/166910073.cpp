#include <bits/stdc++.h>

#define ll long long
#define PB push_back

using namespace std;

const int MXN = 2*1e5;

void solution(){ // JACK NGUYEN
    int N, X;
    cin >> N >> X;
    vector<int> A;
    for(int i=0;i<N;i++) {
        int k; 
        cin >> k;
        A.PB(k);
    }
    // int RANGE[MXN][2];
    int L = A[0], R = A[0];
    int ans = 0;
    for(int k : A) {
        L = min(L, k);
        R = max(R, k);
        if(R-L>2*X) {
            L = k;
            R = k;
            ans++;
        }
    }
    cout << ans << "\n";
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
