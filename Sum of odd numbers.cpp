//Given the triangle of consecutive odd numbers :
//
//1
//3     5
//7     9    11
//13    15    17    19
//21    23    25    27    29
//...
//https://www.codewars.com/kata/55fd2d567d94ac3bc9000064

#include "pch.h"
#include <iostream>

using namespace std;

long long rowSumOddNumbers(unsigned n) {
	int k;
	long int sum = 0;
	const int size = n;
	int *arr = new int[size];
	arr[0] = 1;
	for (int i = 2; i <= size; i++)
	{
		k = 2 * (i - 1);
		arr[i - 1] = arr[i - 2] + k;
	}
	sum = arr[n - 1];
	for (int i = 1; i < size; i++)
	{
		sum = sum + (arr[n - 1] + 2 * i);
	}
	delete[] arr;
	return sum;
}
//Можно было просто вернуть n*n*n.
int main()
{
	cout << rowSumOddNumbers(4);
	return 0;
}

