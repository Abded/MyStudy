#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int x, i(0), amount_squares(0);
	double delta, amount(0), variable(0);
	while (cin >> x, x != 0) { // ������������������ �������������� �� 0; 0 �� ������ � ������������������
		i = i + 1; // ������� ���������� ����������
		amount_squares = pow(x, 2) + amount_squares; // ������� ����� ���������
		amount = x + amount; // ������� �����
	}
	delta = sqrt((amount_squares - (pow(amount, 2) / i)) / (i - 1)); // ������� ����������� ����������
	cout << setprecision(11) << fixed; // ������������� �������� 11 ������ ����� �������
	cout << delta;
	return 0;
}