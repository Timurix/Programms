//https://www.codewars.com/kata/leap-years
//

#include "pch.h"
#include <iostream>

using namespace std;

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0)
		return true;
	if (year % 100 == 0 || year % 4 != 0 || year % 400 != 0)
		return false;
}

int main()
{
	cout << IsLeapYear(2000);
	
	return 0;
}