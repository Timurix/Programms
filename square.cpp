// https://www.codewars.com/kata/54c27a33fb7da0db0100040e

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

bool is_square(int n)
{
	int s = sqrt(n);
	if (s*s == n)
		return 1;
	else
		return 0;
}

int main()
{
	cout << is_square(5);
	
	return 0;
}
