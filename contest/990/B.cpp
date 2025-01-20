#include <bits/stdc++.h> 

#define ll long long
using namespace std;

/*
Observation: We cannot be deficient in two materials or more. On the other hand, 
it is trivial to see that if all materials are sufficient, then the answer is "YES".

Proof: Suppose material A is deficient by x units 
and material B is deficient by y units. If we try to construct
y units of material B then material A will be deficient by (x + y) > x, 
then if we try to construct (x + y) material A, then material B will become
deficient by (x + y) > y => We cannot make both materials sufficient.

Therefore we can only be deficient in one material. 

Answer: If we try to make this material sufficient, and it happens to make
at least one other material deficient => It is impossible, otherwise the answer is
YES. 
*/

void gabagoo() { 
   int n; 
   cin >> n; 
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) 
      cin >> a[i]; 
   for(int i = 0; i < n; i++) 
      cin >> b[i]; 

   // Solution
   int num_deficient = 0; 
   int deficient = -1;
   for(int i = 0; i < n; i++) { 
      if(a[i] < b[i]) { 
         num_deficient++; 
         deficient = i;
      }
      else continue;
   }

   if(num_deficient <= 0) cout << "YES \n";
   else if (num_deficient > 1) cout << "NO \n";
   else { 
      int delta = b[deficient] - a[deficient];
      int ok = 1; 
      for(int i = 0; i < n; i++) { 
         if(i != deficient) { 
            if(a[i] - delta < b[i]) 
               ok = 0; 
         } else continue;
      }
      cout << (ok ? "YES" : "NO") << "\n";
   }
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
