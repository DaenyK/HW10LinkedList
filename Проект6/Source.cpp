#include "list.h"
#include "list.cpp"

void main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	do
	{
		cout << "выберите задание:" << endl
			<< "1 - pushback" << endl
			<< "2 - push_front" << endl
			<< "3 - removeLast" << endl
			<< "4 - removeFirst" << endl
			<< "5 - find" << endl
			<< "6 - operator[]" << endl
			<< "7 - size()\n0 - для выхода\n";
		cin >> nz;
		system("cls");

		cout << "уже имеющийся список:\n";
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
			cout << "введите число, чтобы добавить его в конец: "; cin >> a;
			L.pushback(a);
			L.print();
		}break;

		case 2:
		{
			cout << "введите число, чтобы добавить его в начало: "; cin >> a;
			L.pushfront(a);
			L.print();
		}break;

		case 3:
		{
			cout << "удаление последнего числа\n";
			L.removeLast();
			L.print();
		}break;

		case 4:
		{
			cout << "удаление первого числа\n";
			L.removeFirst();
			L.print();
		}break;

		case 5:
		{
			cout << "введите число для того, чтобы узнать \nесть ли такое число в списке: ";
			cin >> a;
			if (L.find(a) == 1)
				cout << "такое число есть в списке\n";
			else
				cout << "такого числа в списке нет\n";
		}break;

		case 6:
		{
			cout << "введите индекс: "; cin >> a;
			cout << L[a] << endl;
		}break;

		case 7:
		{
			a = L.Size();
			cout <<"size = " << a << endl;
		}break;

		}
		cout << endl;
		cout << "хотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);

	system("pause");
}