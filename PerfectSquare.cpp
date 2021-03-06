// https://www.codewars.com/kata/56269eb78ad2e4ced1000013

#include "pch.h"
#include <iostream>
#include <cmath>

long int findNextSquare(long int sq) {
	double c = std::sqrt(sq);
	long int res = 0;
	c == std::round(c) ? res = (c + 1)*(c + 1) : res = -1;
	return res;
}

int main()
{
	std::cout << findNextSquare(319225);	
	return 0;
}