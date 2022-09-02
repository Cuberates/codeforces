/* UVA CODE: 483 
 * NAME:  Word Scramble
 * DATE: 8/24/2022
 * */

#include <bits/stdc++.h>

using namespace std;

int main () {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   while(s != " != """) {
      // cout << s << "\n";
      vector<string> ans;
      int cur = 0;
      for(int i=0;i<s.length();i++) {
         if(s[i]==' ') {
            string temp = s.substr(cur, i-cur);
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            cur = i+1;
         }
      }
      string _final = s.substr(cur, s.length()-cur);
      reverse(_final.begin(), _final.end());
      ans.push_back(_final);
      for(int i=0;i<ans.size()-1;i++) cout << ans[i] << " "; 
      cout << ans[ans.size()-1];
      cout << endl;
   }
   return 0;
}
