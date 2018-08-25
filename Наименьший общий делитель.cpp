#include <iostream>
using namespace std;
int main() {
	int x, n;
	bool i(false);
	n = 2;
	cin >> x;
		while (i != true) 
		{
			if (x % n == 0)
			{
				cout << n;
				i = true;
			}
			else {
				n = n + 1;
			}
		}
	return 0;
}