// https://www.codewars.com/kata/58841cb52a077503c4000015

#include "pch.h"
#include <iostream>

int circleOfNumbers(int n, int firstNumber)
{
	int res = 0;
	firstNumber + n / 2 == n ? res = 0 : firstNumber + n / 2 > n ? res = firstNumber + n / 2 - n : res = firstNumber + n / 2;
	return res;
}

int main()
{
	std::cout << circleOfNumbers(10,7);	
	return 0;
}