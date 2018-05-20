#include "list.h"
#include "list.cpp"

void main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	do
	{
		cout << "�������� �������:" << endl
			<< "1 - pushback" << endl
			<< "2 - push_front" << endl
			<< "3 - removeLast" << endl
			<< "4 - removeFirst" << endl
			<< "5 - find" << endl
			<< "6 - operator[]" << endl
			<< "7 - size()\n0 - ��� ������\n";
		cin >> nz;
		system("cls");

		cout << "��� ��������� ������:\n";
		List <int> L;
		L.pushback(5);
		L.pushback(12);
		L.pushback(7);
		L.pushback(54);
		L.print();
		switch (nz)
		{
			int a;
		case 0:
		{
			exit(1);
		}break;

		case 1:
		{
			cout << "������� �����, ����� �������� ��� � �����: "; cin >> a;
			L.pushback(a);
			L.print();
		}break;

		case 2:
		{
			cout << "������� �����, ����� �������� ��� � ������: "; cin >> a;
			L.pushfront(a);
			L.print();
		}break;

		case 3:
		{
			cout << "�������� ���������� �����\n";
			L.removeLast();
			L.print();
		}break;

		case 4:
		{
			cout << "�������� ������� �����\n";
			L.removeFirst();
			L.print();
		}break;

		case 5:
		{
			cout << "������� ����� ��� ����, ����� ������ \n���� �� ����� ����� � ������: ";
			cin >> a;
			if (L.find(a) == 1)
				cout << "����� ����� ���� � ������\n";
			else
				cout << "������ ����� � ������ ���\n";
		}break;

		case 6:
		{
			cout << "������� ������: "; cin >> a;
			cout << L[a] << endl;
		}break;

		case 7:
		{
			a = L.Size();
			cout <<"size = " << a << endl;
		}break;

		}
		cout << endl;
		cout << "������ ����������?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);

	system("pause");
}