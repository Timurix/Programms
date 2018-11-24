//https://www.codewars.com/kata/54edbc7200b811e956000556
//

#include "pch.h"
#include <iostream>

using namespace std;

int count_sheep(vector<bool> arr)
{
	int n = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != false && arr[i] != 0)
			n++;
	}
	return n;
}

int main()
{
	vector<bool> sheep = [true, true, true, false,
		true, true, true, true,
		true, false, true, false,
		true, false, false, true,
		true, true, true, true,
		false, false, true, true; ]
		cout << count_sheep(sheep);
	return 0;
}