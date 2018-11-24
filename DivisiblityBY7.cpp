//https://www.codewars.com/kata/a-rule-of-divisibility-by-7
//

#include "pch.h"
#include <iostream>
#include <vector>


using namespace std;

class DivSeven
{
public:
	static pair <long long, long long> seven(long long m)
	{
		long long copy=m;
		vector<int> arr;
		pair <long long, long long> res;
		int k = 0,a,b;
		while (m>=100)
		{
			//m = (m / 10 - (2 * m % 10));
			a = m / 10;
			b = 2 * (m % 10);
			m = a - b;
			k++;
		}
		
			res.first = m;
			res.second = k;
		
		return res;
	}
};

int main()
{
	DivSeven t;
	pair <long long, long long> res;
	res = t.seven(234002979);
	cout << res.first << " " << res.second;

	
	return 0;
}