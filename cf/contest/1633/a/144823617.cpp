#include <bits/stdc++.h>

#define _int long long
#define vt vector

using namespace std;

const int arr_size = 1e5, 
	  _mod 	   = 1e9+7;

void solution(){
    int n;
    cin >> n;
    if(n%7==0) cout << n << "\n";
    else {
	n-=n%10;
	while(n%7!=0) n++;
	cout << n << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for(int i=0;i<tc;i++) {
//	cout << "-- TEST CASE #" << i+1 << " -- \n";
	solution();
    }
}
