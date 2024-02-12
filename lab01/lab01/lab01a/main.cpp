#include <ctime>
#include <locale>
#include <iostream>
#include "Auxil.h"

using namespace std;


const int CYCLE = 1'000'000;


void main() {
	setlocale(LC_ALL, "rus");

	double av1 = 0, av2 = 0;
	clock_t t1 = 0, t2 = 0;

	auxil::start();
	t1 = clock();
	for (int i = 0; i < CYCLE; i++) {
		av1 += (double)auxil::iget(-100, 100);
		av2 += auxil::dget(-100, 100);
	}
	t2 = clock();

	cout << "���������� ������: " << CYCLE << endl;
	cout << "������� �������� (int): " << (av1 / CYCLE) << endl;
	cout << "������� �������� (double): " << (av2 / CYCLE) << endl;
	cout << "����������������� (�.�): " << (t2 - t1) << endl;
	cout << "����������������� (���): " << ((double)(t2-t1)/(double)CLOCKS_PER_SEC) << endl;

	system("pause");
}
