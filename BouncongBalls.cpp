// https://www.codewars.com/kata/5544c7a5cb454edb3c000047

#include "pch.h"
#include <iostream>

using namespace std;

class Bouncingball
{
public:
	static int bouncingBall(double h, double bounce, double window)
	{
		int k = 0;
		if (h <= window || h < 0 || bounce < 0 || bounce >= 1)
			return -1;
		else
		{
			for (int i = 0; h > window; i++)
			{
				k++;
				h *= bounce;
			}
		}
		return 2 * k - 1;
	};
};

int main()
{
	Bouncingball a;
	cout << a.bouncingBall(3, 0.66, 1.5);
	return 0;
}