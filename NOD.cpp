#include <iostream>
using namespace std;
int main() {
	int i, n;
	i = 2;
	cin >> n;
	while (n % i != 0) { i++; }
	cout << i;
	return 0;
}