#include <iostream>
using namespace std;
int main() {
	int n, i, max, max2, b;
	i = 0;
	b = 0;
	n = 1;
	max = n;
	while (n != 0) {
		cin >> n;
		if (n != 0) {
			if (max >= n) {
				b = n;
				max = max;
				if (max > b && b <= n) b = n; ;

				if (n == max) { i++; }
			}
			else { max = n; i = 1; }

			if (i > 1) { max2 = max; }
			else { max2 = b; }
		}
	}
	cout << max2;
	return 0;
}