#include <bits/stdc++.h> 

using namespace std;

void gabagoo() { 
   int n, a, b; 
   cin >> n >> a >> b; 
   if(abs(b - a + 1) % 2 == 0) cout << "NO"; 
   else cout << "YES";
   cout << "\n";
} 

int main(void) { 
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);

   int tt = 1; 
   cin >> tt; 
   for(tt; tt > 0; tt--) { 
      gabagoo(); 
   }
}
