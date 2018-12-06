//https://www.codewars.com/kata/563b662a59afc2b5120000c6

#include "pch.h"
#include <iostream>

class Arge
{
public:
	static int nbYear(int p0, double percent, int aug, int p)
	{
		std::cout << p0 << " " << percent << " " << aug << " " << p << std::endl;
		int n = 0;
		while (p0 <= p)
		{
			p0 += p0 * percent / 100 + aug;
			n++;
		}
		return n;
	};
};

int main()
{
	Arge t;
	std::cout << t.nbYear(1500000, 0, 10000, 2000000);
	return 0;
}
