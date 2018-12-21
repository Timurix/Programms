//https://www.codewars.com/kata/5a4e3782880385ba68000018

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
string balancedNum(unsigned long long int number)
{
	unsigned long long copy = number;
	int k = 0;
	string res = "";
	int sum1 = 0,sum2 = 0;

	while (copy)
	{
		copy /= 10;
		k++;
	}
	if (k & 1)
	{
		for (int i = 0; i < k; i++)
		{
			if (i == (k - 1) / 2)
				number /= 10;

			if (i > (k - 1) / 2)
			{
				sum2 += number % 10;
				number /= 10;
			}
			else if(i < (k - 1) / 2)
			{
				sum1 += number % 10;
				number /= 10;
			}
			
		}
	}
	else
	{
		for (int i = 0; i < k; i++)
		{
			if (i == (k - 2) / 2)
			{
				number /= 100;
				i++;
			}
			if (i > (k - 2) / 2 +1)
			{
				sum2 += number % 10;
				number /= 10;
			}
			else if (i < (k - 2) / 2)
			{
				sum1 += number % 10;
				number /= 10;
			}
		}
	}

	sum1 == sum2 ? res = "Balanced" : res = "Not Balanced";
	return res;
}
int main()
{
	cout<<balancedNum(295591);
	return 0;
}