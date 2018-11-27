//https://www.codewars.com/kata/5506b230a11c0aeab3000c1f
//

#include "pch.h"
#include <iostream>

using namespace std;

class Evaporator
{

public:

	static int evaporator(double content, double evap_per_day, double threshold)
	{
		int days = 0;
		double copy = content;
		while (content >= copy * threshold / 100)
		{
			content = content - content * evap_per_day / 100;
			days++;
		}
		return days;

	}
};

int main()
{
	Evaporator e;
	cout << e.evaporator(10, 10, 10);
	
	
	return 0;
}