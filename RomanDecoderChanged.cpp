//https://www.codewars.com/kata/51b6249c4612
//

#include "pch.h"
#include <iostream>
#include <string>


using namespace std;

int solution(string roman)
{
	int* num = new int[roman.length()];
	int res = 0;
	for (size_t i = 0; i < roman.length(); i++)
	{
		if (roman[i] == 'I')
			num[i] = 1;

		if (roman[i] == 'V')
			num[i] = 5;

		if (roman[i] == 'X')
			num[i] = 10;

		if (roman[i] == 'L')
			num[i] = 50;

		if (roman[i] == 'C')
			num[i] = 100;

		if (roman[i] == 'D')
			num[i] = 500;

		if (roman[i] == 'M')
			num[i] = 1000;
	}
	for (int i = 0; i < roman.length() - 1; i++)
	{
		if (num[i] < num[i + 1])
			res -= num[i];
		else
			res += num[i];
	}
	res += num[roman.length() - 1];

	return res;
}

int main()
{
	cout << solution("MDCLXVI");
	
	return 0;
}