#include <bits/stdc++.h>

using namespace std;

const int mxn = 100;
int a[mxn];

int sum(int a[], int N) {
	int res=0, i=0;
	while(N>0) {
		if(a[i]!=-1) {
			res+=a[i];
			N--;
		} else i++;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		for(int i=0;i<N;i++) cin >> a[i];
		sort(a, a+N);
		int total=N, ans=0, avg=sum(a, total)/total;
		while(a[N-1]>avg) {
			avg=sum(a, total)/total;
			for(int i=0;i<N;i++) {
				if(a[i]>avg) {
					a[i]=-1;
					ans++;
					total--;
				}
			} 
		}
		cout << ans << "\n";
	}

}