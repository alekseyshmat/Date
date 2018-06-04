#include <conio.h>
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	const char *MonthA[12] =
	{
		"������",
		"�������",
		"����",
		"������",
		"���",
		"����",
		"����",
		"������",
		"��������",
		"�������",
		"������",
		"�������"
	};
	Date date;
	setlocale(LC_ALL, "Russian");
	int key;
	while (true)
	{
		system("cls");
		cout << " 1. ������ ���� \
		    \n 2. ������� ���� \
			\n 3. ������� ����� \
			\n 4. ������� ��� \
			\n 5. ������� �� ������� 1 (��.��.��) \
			\n 6. ������� �� ������� 2 (�� ����� ��) \
			\n 7. ���������� ���\
			\n 0. �����\n";
		cout << "�������� ����� -> ";
		cin >> key;
		switch (key)
		{
		case 1:
			system("cls");
			date.setDay();
			date.setMonth();
			date.setYear();
			break;
		case 2:
			system("cls");
			cout << "����: " << date.getDay() << endl;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "�����: " << date.getMonth() << " (" << MonthA[date.getMonth() - 1] << ")" << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "���: " << date.getYear() << endl;
			system("pause");
			break;
		case 5:
			system("cls");
			date.printType1();
			system("pause");
			break;
		case 6:
			system("cls");
			date.printType2();
			system("pause");
			break;
		case 7:
			system("cls");
			date.plusday();
			system("pause");
			break;
		case 0:
			exit(0);
		default:
			system("cls");
			cout << "���������� ������" << endl;
			system("pause");
		}
	}

	_getch();
	return 0;
}

