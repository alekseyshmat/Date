#include "Header.h"
#include <conio.h>
#include <iostream>

using namespace std;

	void Date::setDay()
	{
		int day1;
		do
		{
			cout << "������� ���� ";
			cin >> day1;
			if (day1 >= 1 && day1 <= 31)
				day = day1;
			else
				cout << "������!!! ����������� ������� ������. ������� �������� �� 1 �� 31" << endl;
		} while (day1 < 1 || day1 > 31);
	}

	void Date::setMonth()
	{
		int month1;
		do
		{
			cout << "������� ����� ";
			cin >> month1;
			if (month1 >= 1 && month1 <= 12)
				month = month1;
			else
				cout << "������!!! ����������� ������� ������. ������� �������� �� 1 �� 12" << endl;
		} while (month1 < 1 || month1 > 12);
		if (day > 28 && month == 2)
		{
			cout << "��������! " << endl;
			cout << "��� ��� �� ������� ������� � ���� �� ������������� ���������� ���� � ������, �� ���� ������� �� ���������." << endl;
			day = 28;
		}
		if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		{
			cout << "��������! " << endl;
			cout << "��� ��� �� ����� 31, � �����, ������� �� ����� ������� �� 30 ����, �� ���� ������������� ������� �� 30." << endl;
			day = 30;
		}
	}
	void Date::setYear()
	{
		int year1;
		cout << "������� ��� ";
		cin >> year1;
		year = year1;
	}

	void Date::printType1()
	{
		cout << "������ 1: " << endl;
		if (day <= 9 && month <= 9)
			cout << "0" << day << ".0" << month << "." << year << endl;
		else if (month <= 9)
			cout << day << ".0" << month << "." << year << endl;
		else if (day <= 9)
			cout << "0" << day << "." << month << "." << year << endl;
		else
			cout << day << "." << month << "." << year << endl;
	}
	void Date::printType2()
	{
		const char * MonthB[12] =
		{
			"������",
			"�������",
			"�����",
			"������",
			"���",
			"����",
			"����",
			"�������",
			"��������",
			"�������",
			"������",
			"�������"
		};
		cout << "������ 2: " << endl;
		if (day <= 9)
			cout << "0" << day << " " << MonthB[month - 1] << " " << year << " ����" << endl;
		else
			cout << day << " " << MonthB[month - 1] << " " << year << " ����" << endl;
	}

	int Date::getDay()
	{
		return day;
	}
	int Date::getMonth()
	{
		return month;
	}
	int Date::getYear()
	{
		return year;
	}

	void Date::plusday()
	{
		cout << "���������� ��� �� 1 " << endl;
		if ((day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) 
			|| (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12))
			|| (day == 28 && month == 2))
		{
			day = 1;
			month++;
		}
		else day++;
	}
	
