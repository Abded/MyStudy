#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, n, i;
	i = n = 0;
	cin >> a;
	while (a >= n)
	{
		n = pow(2,i);
		if (a >= n) { cout << n << " "; }

		i = i + 1;
	}
	return 0;
}