#include <iostream>
using namespace std;
int main() {
	int x, i, a, r, n, x1, x2, x3,k;
	i = 0;
	n = 0;
	k = 0;
	r = 3;
	x2 = -1;
	x3 = -1;
	while (cin >> x, x != 0) 
	{
		i = i + 1;
		if (i > r) { i = 3;
		x1 = x2;
		x2 = x3;
		}
		if (i == 1) { x1 = x; }
		if (i == 2) { x2 = x; n = i; }
		if (i == 3) { x3 = x; r = 3; }
		if (i >= 3) {
			if (x1 < x2 && x2 > x3) { k = k + 1; }
		}
	}
	cout << k;
	return 0;
}