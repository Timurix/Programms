// https://www.codewars.com/kata/buying-a-car

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class BuyCar
{

public:
	static vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
	{
		vector <int> res;
		double k = 1 - percentLossByMonth / 100;
		int m = 0;
		int c = 0;
		double o = startPriceOld, n = startPriceNew;
		if (startPriceNew <= startPriceOld)
		{
			res.push_back(0);
			res.push_back(startPriceOld - startPriceNew);
			return res;
		}
		else
		{
			while ((o + c) <= n)
			{
				m++;
				if (m % 2 == 0)
					k -= 0.005;
				o *= k;
				n *= k;
				c += savingperMonth;
			}
		}
		res.push_back(m);
		res.push_back(round(o + c - n));
		return res;
	};
};

int main()
{
	BuyCar a;
	vector<int> t;
	t = a.nbMonths(2000, 8000, 1000, 1.5);
	for (int i = 0; i < 2; i++)
	{
		cout << t[i]<<" ";
	}
	return 0;
}