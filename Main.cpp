#include "Header.h"
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int** arr = 0;
	int strings, columns;
	cout << "������� ���-�� ����� :  " << endl;
	cin >> strings;
	cout << " �������  ���-�� ��������  :   " << endl;
	cin >> columns;
	arr = Init(arr, strings, columns);
	PrintArr(arr, strings, columns);
	arr = Clear(arr, strings);
}
