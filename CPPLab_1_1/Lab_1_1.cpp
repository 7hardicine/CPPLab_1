#include <iostream>
#include <Windows.h>
using namespace std;

// ������ �������� 2-� ���������� ���������� � � b. ��������� ��� ���������
// �� ��� ����������.����� �������� ������� �������� ���������� � � b
// ����� �� ���������.

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char a, b;
	cout << "������� �������� ���� ���������� ���������� a � b:" << endl;
	cin >> a >> b;

	char* a_pointer{ &a }, * b_pointer{ &b };

	cout << "�� ����� a = '" << *a_pointer << "' � b = '" << *b_pointer << "'" << endl;

	char* buffer;
	buffer = a_pointer;
	a_pointer = b_pointer;
	b_pointer = buffer;

	cout << "����� ������������ �� ������� a = '" << *a_pointer << "' � b = '" << *b_pointer << "'" << endl;

	system("pause");
	return 1;
}