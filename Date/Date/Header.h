#pragma once

class Date
{
private:
	int day, month, year;
	
public:
	Date() : day(1), month(1), year(2000) {};
	void setDay();
	void setMonth();
	void setYear();
	void printType1();
	void printType2();
	int getDay();
	int getMonth();
	int getYear();
	void plusday();
	const char *MonthA[12] ={};
	};