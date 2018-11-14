// https://www.codewars.com/kata/555615a77ebc7c2c8a0000b8
//Программа работает, но при нажатии atempt выводится Test Results:
//tickets_test с зелеными флажками, а сверху Exit code:139.

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string tickets(const vector<int> peopleInLine) {
	int money = 0, a = 0, b = 0;
	for (size_t i = 0; i < peopleInLine.size(); i++)
	{
		if (peopleInLine[i] == 25) {
			money = money + peopleInLine[i];
			a++;
			if (peopleInLine.size() == i + 1)
				return "YES";
		}
		if (peopleInLine[i] == 50 && a >= 1) {
			money = money + peopleInLine[i] - 25;
			b++;
			a--;
			if (peopleInLine.size() == i + 1)
				return "YES";
		}
		else if (peopleInLine[i] == 50 && a < 1)
			return "NO";

		if (peopleInLine[i] == 100 && b >= 1 && a >= 1) {
			money = money + peopleInLine[i] - 75;
			if (a == 3)
				a = a - 3;
			else
			{
				b--;
				a--;
			}
			if (peopleInLine.size() == i + 1)
				return "YES";
		}

		if (peopleInLine[i] == 100 && a >= 3) {
			money = money + peopleInLine[i] - 75;
			a = a - 3;
			if (peopleInLine.size() == i + 1)
				return "YES";
		}

		if (peopleInLine[i] == 100 && b >= 1 && a < 1) {
			return "NO";
		}

	}
	return 0;
}

int main()
{
	vector <int> test;
	test.push_back(100);
	test.push_back(50);
	test.push_back(50);
	test.push_back(25);
	test.push_back(25);
	cout<<tickets(test);
	return 0;
}


