#include <iostream>
using namespace std;
int main() {
	int x,s, i, a, r, n, x1, x2, x3,k, min, l, min2;
	a = 0;
	min2 = 0;
	i = 0;
	s = 0;
	n = 0;
	min = 0;
	k = 0;
	r = 3;
	x2 = -1;
	x3 = -1;
	l = 0;
	while (cin >> x, x != 0) 
	{	
		l = l + 1;
		i = i + 1;
		if (i > r) { i = 3;
		x1 = x2;
		x2 = x3;
		}
		if (i == 1) { x1 = x; }
		if (i == 2) { x2 = x;}
		if (i == 3) { x3 = x; r = 3; }
		if (i >= 3) {
			if (x1 < x2 && x2 > x3) {
				k = k + 1;
				if (k >= 1) {
					if (k > 1) { min2 = min; }
					min = l - s;
					s = l;
					if (k > 2 && min2 < min) { min = min2; }
				}
			}

		}
		
	}
	if (k < 2) { min = 0; }
	cout << min;
	return 0;
}