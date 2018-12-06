//https://www.codewars.com/kata/56484848ba95170a8000004d

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class GpsSpeed
{
public:
	static int gps(int s, vector<double> &x)
	{
		if (x.size() < 2)
			return 0;
		else
		{
			double vel = 0;
			for (int i = 0; i < x.size() - 2; i++)
				vel = max(vel, 3600 * (x[i + 2] - x[i + 1]) / s);
			return (int)vel;
		}
	};
};
int main()
{
	vector<double> ar = { 0,0.18,0.36,0.54,0.72,1.05,1.26,1.47,1.92,2.16,2.4,2.64,2.88,3.12,3.36,3.6,3.84 };
	GpsSpeed t;
	cout << t.gps(20, ar);
	return 0;
}