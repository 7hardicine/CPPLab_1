#include <iostream>
#include <Windows.h>
using namespace std;

// ������� ������������ �������, ��������� ���������. ���� 2 ������� �(n) �
// �(m).������� ��� ����������� ��������� ������� ������� ������� �(n) ��
// ������ ������� �(m).

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n{ 5 }, m{ 10 };
	cout << "������� �������� n � m: " << n << " � " << m << " ��������������" << endl;

	int x[n];
	int y[m];
	int* x_pointer{ x };
	int* y_pointer{ y };

	cout << "������� ������ x[n]:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(x_pointer + i);
	}

	cout << "������� ������ y[m]:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(y_pointer + i);
	}

	int last_x = *(x_pointer + n - 1);
	int k{ 0 };

	for (int i = 0; i < m; i++)
	{
		*(y_pointer + i) == last_x ? k++: k;
	}

	cout << "��������� ����� ������� ������� ����������� �� ������ " << k << " ���(�)" << endl;

	system("pause");
	return 1;
}