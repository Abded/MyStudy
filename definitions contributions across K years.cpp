#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int p, x, y, s, i, n, pr;
	double r, kop, k;
	i = 1; // ������� ��� �������� ���������� 
	cin >> p >> x >> y >> k;
	s = x * 100 + y; // ����� � ��������
	while (i <= k) {
		if (i != k) {
			pr = ((double)p / 100) * s; // ��������� �������� ��� �����
			s = trunc(s + pr); // ��������� ����������� � ������ � ����������� �������
		}
		else {
			pr = ((double)p / 100) * s; // (�� ������� ������) 
			s = (s + pr); // (�� ������� ������)  ����������� ������� � ��������� ����
		}
		i = i + 1;
	} 
	r = s / 100; // ������� � �����
	kop = s % 100; // �������  � �������
	cout << r << " " << kop;
	return 0;
}