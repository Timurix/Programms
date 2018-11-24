//https://www.codewars.com/kata/54edbc7200b811e956000556
//

#include "pch.h"
#include <iostream>
#include <vector>

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
	vector<bool> sheep;
	bool t[24] = { true, true, true, false,
		true, true, true, true,
		true, false, true, false,
		true, false, false, true,
		true, true, true, true,
		false, false, true, true };
	for (int i = 0; i < 24; i++)
		sheep.push_back(t[i]);
		cout << count_sheep(sheep);
	return 0;
}