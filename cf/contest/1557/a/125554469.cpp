#include <bits/stdc++.h>
#define ll long long
#define pb push_back
// #define for(i,a,b) for(int i=a;i<=b;i++) 
// #define rfor(i,a,b) for(int i=a;i>=b;i--) 

typedef std::vector<int> v_int;
//typedef std::vector<string> v_string;
typedef std::vector<double> v_double;

using namespace std;

const int mxn = 1e5;

double a, b[mxn]; int inp[mxn], N;

double f(int a, double b[], int N){
	double res=0;
	for(int i=0;i<N;i++) res+=b[i];
	res/=N;
	return res+a;
}

int solve(){
	// Code
	cin >> N;
	for(int i=0;i<N;i++) cin >> inp[i];
	sort(inp, inp+N);
	a=inp[N-1];
	for(int i=0;i<N-1;i++) b[i]=inp[i];
	cout << setprecision(15) << f(a, b, N-1) << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(); cout.tie();
	int T;
	cin >> T;
	while(T--) solve();
}