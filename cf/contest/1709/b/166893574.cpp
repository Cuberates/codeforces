#include <bits/stdc++.h>

#define ll long long
#define PB push_back

using namespace std;

const int MXN = 1e5;

void solution(){ // JACK NGUYEN
    long long N, M;
    cin >> N >> M;
    vector<int> A;
    for(int i=0;i<N;i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    // PREFIX SUM 
    long long LR[MXN], RL[MXN];
    // From left to right
    LR[0] = 0;
    for(int i=1;i<N;i++) {
        LR[i] = LR[i-1];
        long long D = A[i] - A[i-1];
        if(D<=0) LR[i] += (-D);
    }
    // for(int k : LR) cout << k << " "; cout << "\n"
    RL[0] = 0;
    for(int i=N-2;i>=0;i--) {
        RL[i] = RL[i+1];
        long long D = A[i] - A[i+1];
        if(D<=0) RL[i] += (-D);
    }
    reverse(RL, RL+N);
    // for(int k : RL) cout << k << " "; cout << "\n";
    //
    //
    // for(int i=0;i<N;i++) cout << LR[i] << " " << RL[i] << "\n"; cout << "\n";
    vector<long long> ANS;
    for(int i=0;i<M;i++) {
        long long P, Q;
        cin >> P >> Q; 
        P--; Q--;
        if(P<Q) { // going from left to right
            long long K;
            K=LR[Q]-LR[P]; 
            ANS.push_back(K);
        } else {
            long long K;
            // P = N-P-1;
            // Q = N-Q-1;
            K=RL[N-Q-1]-RL[N-P-1]; 
            ANS.push_back(K);
        }
    }
    for(auto x : ANS) cout << x << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tt = 1;
    //cin >> tt; // Read in test cases
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
    }
}
