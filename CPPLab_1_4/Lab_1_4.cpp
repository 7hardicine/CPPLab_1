#include <iostream>
#include <Windows.h>
using namespace std;

// Создать динамические массивы, используя указатели. Дан массив с(n) .
// Переписать в массив х(n) все ненулевые элементы массива, возведенные в
// квадрат. (со сжатием., без пустых элементов внутри) Затем упорядочить
// методом «выбора и перестановки» по возрастанию новый массив.

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size_n;
	cout << "Введите размер массива c: ";
	cin >> size_n;

	cout << "Введите массив c[n]:" << endl;
	int* c = new int[size_n];
	for (int i = 0; i < size_n; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(c + i);
	}

	int size_x = 0;
	for (int i = 0; i < size_n; i++)
	{
		*(c + i) != 0 ? size_x++ : size_x;
	}
	int* x = new int[size_x];

	for (int i = 0, j = 0; j < size_x; i++)
	{
		*(c + i) != 0 ? *(x + j) = *(c + i) * *(c + i), j++ : j;
	}

	cout << "Второй массив x[n]:" << endl;
	for (int i = 0; i < size_x; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(x + i) << endl;
	}

	for (int i = 0; i < size_x - 1; i++)
	{
		int* min = x + i;
		for (int j = i + 1; j < size_x; j++)
		{
			*(x + j) < *min ? min = x + j : min;
		}
		int buffer{*(x + i)};
		*(x + i) = *min;
		*min = buffer;
	}

	cout << "Второй отсортированный массив x[n]:" << endl;
	for (int i = 0; i < size_x; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(x + i) << endl;
	}

	delete[] c;
	delete[] x;

	system("pause");
	return 1;
}