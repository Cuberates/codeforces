#include <iostream>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int s, v1, v2, t1, t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	v1 = v1*s+t1*2; v2 = v2*s+t2*2;
	
	//cout << v1 << " " << v2;
	
	if(v1 < v2) cout << "First" << "\n";
	else if (v1 > v2) cout << "Second" << "\n";
	else cout << "Friendship" << "\n";
	
}
