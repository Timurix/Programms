//https://www.codewars.com/kata/jumping-number-special-numbers-series-number-4

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string jumpingNumber(int number)
{
	string res = "Jumping!!";
	vector<int> arr;
	while (number)
	{
		arr.push_back(number % 10);
		number /= 10;
	}
	for (int i = 0; i < arr.size() - 1; i++)
	{
		if (abs(arr[i] - arr[i + 1]) != 1)
		{
			res = "Not!!";
			break;
		}
		res = "Jumping!!";
	}
	return res;
}
int main()
{
	cout<<jumpingNumber(9);

	return 0;
}
