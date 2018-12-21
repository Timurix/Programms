//https://www.codewars.com/kata/automorphic-number-special-numbers-series-number-6

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string autoMorphic(int num)
{
	long int pow = num * num;
	int k = 1;
	string res = "";
	int copy = num;
	while (copy)
	{
		copy /= 10;
		k *= 10;
	}
	pow % k == num ? res = "Automorphic" : res = "Not!!";
	return res;
}
int main()
{
	cout<<autoMorphic(25);
	return 0;
}