//https://www.codewars.com/kata/57f609022f4d534f05000024

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int stray(vector<int> numbers) {
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] != numbers[i + 1])
			return numbers[i + 1];
	}
	return 0;
};

int main()
{
	vector <int> test;
	test.push_back(17);
	test.push_back(17);
	test.push_back(3);
	test.push_back(17);
	test.push_back(17);
	cout << stray(test);

	return 0;
}


