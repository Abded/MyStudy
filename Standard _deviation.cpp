#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int x, i(0), amount_squares(0);
	double delta, amount(0), variable(0);
	while (cin >> x, x != 0) { // последовательность оканчивающаяся на 0; 0 не входит в последовательность
		i = i + 1; // считает количество переменных
		amount_squares = pow(x, 2) + amount_squares; // считает сумму квадратов
		amount = x + amount; // считает сумму
	}
	delta = sqrt((amount_squares - (pow(amount, 2) / i)) / (i - 1)); // считаем стандартное отклонение
	cout << setprecision(11) << fixed; // устанавливаем точность 11 знаков после запятой
	cout << delta;
	return 0;
}