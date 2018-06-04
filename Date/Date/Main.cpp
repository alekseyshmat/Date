#include <conio.h>
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	const char *MonthA[12] =
	{
		"Январь",
		"Февраль",
		"Март",
		"Апрель",
		"Май",
		"Июнь",
		"Июль",
		"Август",
		"Сентябрь",
		"Октябрь",
		"Ноябрь",
		"Декабрь"
	};
	Date date;
	setlocale(LC_ALL, "Russian");
	int key;
	while (true)
	{
		system("cls");
		cout << " 1. Ввести дату \
		    \n 2. Вывести день \
			\n 3. Вывести месяц \
			\n 4. Вывести год \
			\n 5. Вывести по шаблону 1 (дд.мм.гг) \
			\n 6. Вывести по шаблону 2 (дд месяц гг) \
			\n 7. Приращение дня\
			\n 0. Выход\n";
		cout << "Сделайте выбор -> ";
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
			cout << "День: " << date.getDay() << endl;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "Месяц: " << date.getMonth() << " (" << MonthA[date.getMonth() - 1] << ")" << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "Год: " << date.getYear() << endl;
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
			cout << "Попробуйте заново" << endl;
			system("pause");
		}
	}

	_getch();
	return 0;
}

