#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int p, x, y, s, i, n, pr;
	double r, kop, k;
	i = 1; // счетчик для контроля округления 
	cin >> p >> x >> y >> k;
	s = x * 100 + y; // сумма в копейках
	while (i <= k) {
		if (i != k) {
			pr = ((double)p / 100) * s; // вычисляем проценты для суммы
			s = trunc(s + pr); // вычисляем прибавление к вкладу и отбрасываем остаток
		}
		else {
			pr = ((double)p / 100) * s; // (по условию задачи) 
			s = (s + pr); // (по условию задачи)  отбрасываем остаток в последнем году
		}
		i = i + 1;
	} 
	r = s / 100; // перевод в рубли
	kop = s % 100; // перевод  в копейки
	cout << r << " " << kop;
	return 0;
}