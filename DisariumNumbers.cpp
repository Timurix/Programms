//https://www.codewars.com/kata/disarium-number-special-numbers-series-number-3

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string disariumNumber(int number)
{
	int sum = 0,copy = number;
	int k = 0;
	string res = "";
	vector<int> arr;
	while (number)
	{
		arr.push_back(number % 10);
		number /= 10;
		k++;
	}
	for (int i = 0; i <arr.size(); i++)
	{
		int imp = 1;
		for (int j = 0; j < k; j++)
			imp *= arr[i];
		sum += imp;
		k--;
	}
	return copy == sum ? res = "Disarium !!" : res = "Not !!";
}

int main()
{
	cout<<disariumNumber(64599);
	return 0;
}