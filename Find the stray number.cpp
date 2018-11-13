//You are given an odd - length array of integers, in which all of them are the same, except for one single number.
//
//Complete the method which accepts such an array, and returns that single different number.
//
//The input array will always be valid!(odd - length >= 3)
//
//Examples
//[1, 1, 2] == > 2
//[17, 17, 3, 17, 17, 17, 17] == > 3

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int stray(vector<int> numbers) {
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] != numbers[i + 1])
			return numbers[i + 1];
	}
	return 0;
};

int main()
{
	return 0;
}


