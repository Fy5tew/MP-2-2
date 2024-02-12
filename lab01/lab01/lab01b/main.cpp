#include <ctime>
#include <locale>
#include <iostream>
#include <stdexcept>

using namespace std;


const int VALUE = 35;


unsigned long long int fibonacci(int value) {
	if (value < 0) {
		throw invalid_argument("Fibonacci value cannot be less than zero");
	}
	if (value == 0) {
		return 0;
	}
	if (value == 1 || value == 2) {
		return 1;
	}
	return fibonacci(value - 1) + fibonacci(value - 2);
}


void main() {
	setlocale(LC_ALL, "rus");

	unsigned long long int result = 0;
	clock_t t1 = 0, t2 = 0;

	t1 = clock();
	result = fibonacci(VALUE);
	t2 = clock();

	cout << "Значение: " << VALUE << endl;
	cout << "Результат: " << result << endl;
	cout << "Продолжительность (у.е): " << (t2 - t1) << endl;
	cout << "Продолжительность (сек): " << ((double)(t2 - t1) / (double)CLOCKS_PER_SEC) << endl;

	system("pause");
}
