#include <iostream>
#include <Windows.h>
#define MAX_SIZE 20
using namespace std;

// Создать динамические массивы, используя указатели. Дано 2 массива х(n) и
// у(m).Сколько раз встречается последний элемент первого массива х(n) во
// втором массиве у(m).

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите размеры массива x(n) и y(m): ";
	int n, m;
	cin >> n >> m;
	cout << "Размеры массивов n и m: " << n << " и " << m << \
		" соответственно" << endl;

	int x[MAX_SIZE];
	int y[MAX_SIZE];
	int* x_pointer{ x };
	int* y_pointer{ y };

	cout << "Введите массив x[n]:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(x_pointer + i);
	}

	cout << "Введите массив y[m]:" << endl;
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

	cout << "Последнее число первого массива встречается во втором "\
		<< k << " раз(а)" << endl;

	system("pause");
	return 1;
}