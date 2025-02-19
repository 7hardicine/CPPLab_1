#include <iostream>
#include <Windows.h>
using namespace std;

// Описать 3 указателя на символьный тип. Выделить для них динамическую
// память. Ввести значения в выделенную память с клавиатуры. Поменять
// местами значения первых 2 - х переменных

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* a, * b, * c;

	a = new char;
	b = new char;
	c = new char;

	cout << "Введите значения трёх символьных переменных a и b и c:" << endl;
	cin >> *a >> *b >> *c;

	cout << "Вы ввели a = '" << *a << "' и b = '" << *b << "' и c = '" << *c << "'" << endl;

	char* buffer;
	buffer = a;
	a = b;
	b = buffer;

	cout << "После перестановки мы получим a = '" << *a << "' и b = '" << *b << "' и c = '" << *c << "'" << endl;

	delete(a);
	delete(b);
	delete(c);

	system("pause");
	return 1;
}