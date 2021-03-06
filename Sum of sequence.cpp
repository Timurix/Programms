//https://www.codewars.com/kata/586f6741c66d18c22800010a


#include "pch.h"
#include <iostream>

using namespace std;

int sequenceSum(int start, int end, int step)
{
	int sum = 0;
	if (start > end)
		return 0;

	for (int i = start; i <= end; i = i + step)
	{
		sum = sum + start;
		start = start + step;
	}
	return sum;
}

int main()
{
	cout << sequenceSum(1, 5, 1);
	return 0;
}


