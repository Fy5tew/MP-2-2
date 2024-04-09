#include <cmath>
#include <time.h>
#include <memory.h>
#include <iostream>
#include "MultiMatrix.h"
using namespace std;


// 16
#define N 6


void main() {
	setlocale(LC_ALL, "rus");

	clock_t tr1, tr2, td1, td2;
	int Mc[N + 1] = {
		60, 15, 50, 53, 10, 30, 11,
		//100, 156, 145, 123, 167, 67, 138, 197, 189, 156 
	};
	int Ms[N][N], r = 0, rd = 0;

	memset(Ms, 0, sizeof(int) * N * N);
	tr1 = clock();
	r = OptimalM(1, N, N, Mc, OPTIMALM_PARM(Ms));
	tr2 = clock();
	cout << endl;
	cout << endl << "-- ����������� ������ (����������� �������) " << endl;
	cout << "����������� ������: ";
	for (int i = 1; i <= N; i++) cout << "(" << Mc[i - 1] << "," << Mc[i] << ") ";
	cout << endl << "����������� ���������� �������� ���������: " << r;
	cout << endl << "����������� �����: " << (tr2 - tr1);
	cout << endl << endl << "������� S" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << endl;
		for (int j = 0; j < N; j++)  std::cout << Ms[i][j] << "  ";
	}
	cout << endl;

	memset(Ms, 0, sizeof(int) * N * N);
	td1 = clock();
	rd = OptimalMD(N, Mc, OPTIMALM_PARM(Ms));
	td2 = clock();
	cout << endl
		<< "-- ����������� ������ (������������ ����������������) " << endl;
	cout << endl << "����������� ������: ";
	for (int i = 1; i <= N; i++)
		cout << "(" << Mc[i - 1] << "," << Mc[i] << ") ";
	cout << endl << "����������� ���������� �������� ���������: " << rd;
	cout << endl << "����������� �����: " << (td2 - td1);
	cout << endl << endl << "������� S" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << endl;
		for (int j = 0; j < N; j++) cout << Ms[i][j] << "  ";
	}
	cout << endl << endl;

	system("pause");
}
