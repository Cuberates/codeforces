#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
   string s;
   set<char> t;
   getline(cin, s);
   for(int i=0;i<s.length();i++) {
   	   if(isalpha(s[i])) t.insert(s[i]);	
   }
   cout << t.size() << "\n";
}