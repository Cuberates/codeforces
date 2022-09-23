#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=a;i>b;i--)

typedef std::vector<int> v_int;

using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(); cout.tie();

	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int T;
	cin >> T;
	while(T--) {
		int N; string S;
		cin >> N >> S;
		int a=0, b=0;
		REP(i,0,N) {
			if((int)S[i]-48>0&&i<N-1) a++;
			b+=(int)S[i]-48;
		}
		cout << a+b << "\n";
	}
	
}