#include <iostream>
#include <iomanip>
#include <math.h>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	double x1, y1, x2, y2, result;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << setprecision(17) << sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)); 
		
}

