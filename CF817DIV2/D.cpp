/* Solution by Jack Nguyen @ Cuberates */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll sum_val (vector<ll> count_at) {
   ll res = 0; 
   for(ll x : count_at) res += x;
   return res;
}
void test_case () {
   int N;
   cin >> N;
   string S;
   cin >> S;
   vi temp(N, 1);
   vector<ll> prefix_sum(N);
   prefix_sum[0] = temp[0];
   for(int i=1;i<N;i++) prefix_sum[i] = temp[i] + prefix_sum[i-1]; 

   // for(ll x : prefix_sum) cout << x << " ";

   vector<ll> count_at(N);
   for(int i=0;i<N;i++) {
      if(S[i]=='L') count_at[i] = prefix_sum[i] - prefix_sum[0];
      else          count_at[i] = prefix_sum[N-1] - prefix_sum[i]; 
   }
   vector<int> out_of_place(N);
   if(N%2==0) {
      for(int i=0;i<N/2;i++) out_of_place[i] = (S[i] != 'R');
      for(int i=N/2;i<N;i++) out_of_place[i] = (S[i] != 'L');
   } else {
      for(int i=0;i<N/2;i++) out_of_place[i] = (S[i] != 'R'); 
      out_of_place[N/2] = 0;
      for(int i=N/2+1;i<N;i++) out_of_place[i] = (S[i] != 'L'); 
   }

   // for(int x : out_of_place) cout << x << " "; cout << endl;
   ll cur_sum = sum_val(count_at);
   vector<ll> ans;
   for(int i=0;i<N;i++) {
      if(out_of_place[i]) {
            if(i<N/2) {
               // left
               cur_sum = cur_sum - count_at[i] + (prefix_sum[N-1] - prefix_sum[i]); 
               ans.push_back(cur_sum);
            } else {
               cur_sum = cur_sum - count_at[i] + (prefix_sum[i] - prefix_sum[0]);
               ans.push_back(cur_sum);
            }
         } else continue;
      }
   for(ll x : ans) cout << x << " "; 
   cout << endl;
}

int main() {
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
   for(int i=0;i<tt;i++) {
      // cout << "TEST #" << i+1 << "-----" << "\n";
      test_case ();
   }
}
