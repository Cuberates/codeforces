#include <iostream>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	if(n%3==0&&n%5==0) cout << "FizzBuzz";
	else if(n%3==0&&n%5!=0) cout << "Fizz";
	else if(n%3!=0&&n%5==0) cout << "Buzz";
}
