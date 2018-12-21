//https://www.codewars.com/kata/strongn-strong-number-special-numbers-series-number-2

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
long int factorial(int n)
{
	return n == 0 ? 1 : n * factorial(n - 1);
}
string strong_num(int number)
{
	string res = "";
	int sum = 0;
	int copy = number;
	while (copy)
	{
		sum += factorial(copy % 10);
		copy /= 10;
	}
	return sum == number ? res = "STRONG!!!!" : res = "Not Strong !!";;
}

int main()
{
	cout << strong_num(145) << endl;
	return 0;
}