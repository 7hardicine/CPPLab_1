#include <iostream>
#include <Windows.h>
using namespace std;

// Ввести значение 2-х символьных переменных а и b. Направить два указателя
// на эти переменные.Затем поменять местами значения переменных а и b
// через их указатели.

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char a, b;
	cout << "Введите значения двух символьных переменных a и b:" << endl;
	cin >> a >> b;

	char* a_pointer{ &a }, * b_pointer{ &b };

	cout << "Вы ввели a = '" << *a_pointer << "' и b = '" << *b_pointer << "'" << endl;

	char* buffer;
	buffer = a_pointer;
	a_pointer = b_pointer;
	b_pointer = buffer;

	cout << "После перестановки мы получим a = '" << *a_pointer << "' и b = '" << *b_pointer << "'" << endl;

	system("pause");
	return 1;
}