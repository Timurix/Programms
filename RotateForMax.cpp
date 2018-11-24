//https://www.codewars.com/kata/56a4872cbb65f3a610000026
//

#include "pch.h"
#include <iostream>

using namespace std;

class MaxRotate
{
public:
	static long long maxRot(long long n)
	{
		int a=1,d=1;
		long long k = 1;
		long long copy = n;
		long long max;
		while (copy / 10 >= 1)
		{
			copy /= 10;
			k *= 10;
			d++;
		}
		max = n;
		n = (n % k) * 10 + (n / k);
		if (n > max)
			max = n;
		for (int i = 0; i < d-1; i++)
		{
			n = (n / (k/a))*k/a + (n % (k / (10*a))) * 10 + ((n / (k / (10*a)))) % 10;
			a *= 10;
			if (n > max)
				max = n;
  		}
		if (n == 1)
			return 1;
		return max;
	}
};

int main()
{
	MaxRotate t;
	
	cout << t.maxRot(68040715147672);
	
	return 0;
}