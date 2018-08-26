#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, i, x;
	i = 0;
	x = 1;
	cin >> n;
	while (n > x) {
		x = pow(2, i);
		i = i + 1;
	}
	if (n == x) { cout << "YES"; }
	else { cout << "NO"; }
	return 0;
}