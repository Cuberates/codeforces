#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int h, m, s; string a;
	cin >> h >> m >> s >> a;
	if(a=="AM") cout << h*pow(60,2) + m*60 + s;
	else cout << (h*pow(60,2) + m*60 + s)+12*pow(60,2);
		
}

