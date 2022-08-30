#include <bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   char inp[1024];
   while(gets(inp)) {
      // cout << inp << "\n";
      string st = "``", en = "\'\'";
      int status = 0;
      for(char k : inp) {
         if(k == '\"') {
            if(status % 2 == 0) cout << st;
            else cout << en;
            status++;
         } else cout << k;
      }
   }

   return 0;
}
