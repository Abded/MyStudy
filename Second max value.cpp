#include <iostream>
using namespace std;
int main() {
	int n, i, max, max2;
	i = 0;
	n = 1;
	max = n;
	max2 = 0;
	while (cin >> n, n != 0) {
			if (max >= n) {
				max = max;
				if (max > max2 && max2 >= n) { max2 = max2; }
				else { max2 = n; }
				if (n == max) { i++; }
			}
			else {
				max2 = max;
				max = n; 
				i = 1;
			}

			if (i > 1) { max2 = max; }
			

	}
	cout << max2;
	return 0;
}