/* UVA CODE: 661 
 * */

#include <bits/stdc++.h>

using namespace std;

long long computeLoad(vector<long long> status, vector<long long> deviceList) {
   long long load = 0;
   for(int i=0;i<status.size();i++) {
      if(status[i]) load += deviceList[i];
   }
   return load;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   long long n, m, c, seq = 1;
   while(cin >> n >> m >> c) {
      if(n == m && m == c && n == 0) break; // Check for termination
      else {
         vector<long long> deviceList(n); // Input device list
         for(int i=0;i<n;i++) {
            cin >> deviceList[i];
         }
         vector<long long> operations(m); // Input sequence
         for(int i=0;i<m;i++) {
            cin >> operations[i];
         }
         vector<long long> status(n, 0); // Keeping track of the status (0, 1) of the devices
         long long maxLoad = -1, verdict = 0;
         for(int o : operations) {
            status[o-1]++; // Incrementing the status
            if(status[o-1]>1) status[o-1] = 0; // Reset the status to 0 if it's 1.
            long long currentLoad = computeLoad(status, deviceList); 
            if(currentLoad > c) {
               verdict = 1;
               break;
            } else maxLoad = max(currentLoad, maxLoad);
         }
         cout << "Sequence " << seq << "\n";
         if(verdict) cout << "Fuse was blown.\n";
         else {
            cout << "Fuse was not blown.\n";
            cout << "Maximal power consumption was " << maxLoad << " amperes.\n";
         }
         cout << endl;
         seq++;
      }
   }
   return 0;
}
