//https://www.codewars.com/kata/580878d5d27b84b64c000b51


#include "pch.h"
#include <iostream>

using namespace std;

int sumTriangularNumbers(int n) {
	int sum1 = 1;
	int sum2 = sum1;
	if (n < 0)
		return 0;
	for (int i = 1; i < n; i++)
	{
		sum1 = sum1 + 1 + i;
		sum2 = sum2 + sum1;
	}
	return sum2;
}

int main()
{
	cout << sumTriangularNumbers(5);
	return 0;
}

