#include <iostream>
using namespace std;
int main() {
	int i, n, b, p;
	i = 2;
	p = 1;
	b = 1;
	cin >> n;
	if (n == 1) { b = 1; }
	else {
		while (i != n) {
			i++;
			b = b + p;
			p = b - p;
		}
	}
	cout << b;
	return 0;
}