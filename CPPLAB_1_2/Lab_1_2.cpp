#include <iostream>
#include <Windows.h>
using namespace std;

// ������� 3 ��������� �� ���������� ���. �������� ��� ��� ������������
// ������. ������ �������� � ���������� ������ � ����������. ��������
// ������� �������� ������ 2 - � ����������

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* a, * b, * c;

	a = new char;
	b = new char;
	c = new char;

	cout << "������� �������� ��� ���������� ���������� a � b � c:" << endl;
	cin >> *a >> *b >> *c;

	cout << "�� ����� a = '" << *a << "' � b = '" << *b << "' � c = '" << *c << "'" << endl;

	char* buffer;
	buffer = a;
	a = b;
	b = buffer;

	cout << "����� ������������ �� ������� a = '" << *a << "' � b = '" << *b << "' � c = '" << *c << "'" << endl;

	delete(a);
	delete(b);
	delete(c);

	system("pause");
	return 1;
}