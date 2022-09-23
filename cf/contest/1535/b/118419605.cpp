#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

bool isPrime(int n) {
    bool _prime = true;
    if (n==0||n==1) {
        _prime = false;
    }
    else {
        for (int i=2;i<=n/2;i++) {
            if (n % i == 0) {
                _prime=false;
                break;
            }
        }
    }
    return _prime;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		vt<int> a, _e, _p, _np; int o=0;
		for(int i=0;i<N;i++) {
			int x;
			cin >> x;
			if(x==1) o++;
			else if(isPrime(x)) _p.push_back(x);
			else if(x%2==0) _e.push_back(x);
			else _np.push_back(x);
		}

		for(int i=0;i<_e.size();i++) a.push_back(_e[i]);
		sort(a.begin(), a.end());
		sort(_p.begin(), _p.end());
		sort(_np.begin(), _np.end());
		for(int i=0;i<_p.size();i++) a.push_back(_p[i]);
		for(int i=0;i<_np.size();i++) a.push_back(_np[i]);
		for(int i=0;i<o;i++) a.push_back(1);

		//for(int i=0;i<N;i++) cout << a[i] << " ";
		//cout << "\n";
		int ans=0;
		for(int i=0;i<N-1;i++) {
			for(int j=i+1;j<N;j++) {
				if(__gcd(a[i], 2*a[j])>1) ans++;
			}
		}
		cout << ans << "\n";
	}

// GCD(prime, prime)=1
// GCD(prime, 

}