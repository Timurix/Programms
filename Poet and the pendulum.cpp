//Given an array / list[] of n integers, Arrange them in a way similar to the to - and-fro movement of a Pendulum
//
//The Smallest element of the list of integers, must come in center position of array / list.
//
//The Higher than smallest, goes to the right .
//The Next higher number goes to the left of minimum number and So on, in a to - and-fro manner similar to that of a Pendulum.
//Notes
//Array / list size is at least 3 .
//
//In Even array size, The minimum element should be moved to(n - 1) / 2 index(considering that indexes start from 0)
//
//Repetition of numbers in the array / list could occur, So(duplications are included when Arranging).
//
//Input >> Output Examples :
//1 - Pendulum({ 6, 6, 8 ,5 ,10 }) == > return { 10, 6, 5, 6, 8 }
//Explanation:
//Since, 5 is the The Smallest element of the list of integers, came in The center position of array / list
//
//The Higher than smallest is 6 goes to the right of 5 .
//
//The Next higher number goes to the left of minimum number and So on .
//
//Remeber, Duplications are included when Arranging, Don't Delete Them .

//Программа уходит,похоже, в вечный цикл где-то, и codewars выдает "Execution Timed Out (12000 ms)".
// Но при запуске сэмплов(а их там довольно много), все нормально работает и тратится на выполнение ~2000мс.

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector <int> Pendulum(vector <int> values)
{
	int *darr = new int[values.size()];
	darr[0] = 0;//нужно для проверки того, что массив заполнен.
	darr[values.size() - 1] = 0;//нужно для проверки того, что массив заполнен.
	vector <int> copy;
	int min = values[0];
	int k = 1;
	int d = 1;
	int tmp;
	//Поиск минимального значения в массиве и установление его на (n-1)/2 место в новом массиве.
	for (size_t i = 0; i < values.size(); i++)
	{
		if (values[i] <= min)
		{
			min = values[i];
			darr[(values.size() - 1) / 2] = min;
		}
	}
	//Сортировка начального массива по возрастанию.
	for (size_t i = 0; i < values.size(); i++)
	{
		for (size_t j = i + 1; j < values.size(); j++)
		{
			if (values[i] > values[j])
			{
				tmp = values[i];
				values[i] = values[j];
				values[j] = tmp;
			}
		}
	}
	
	for (size_t i = 1; i < values.size(); i++)
	{
		if (values[i] >= min)
		{
			for (int j = 0; j < 2; j++)
			{
				if (darr[values.size() - 1] != 0 && darr[0] != 0)/* Проверка массива на то, что он заполнен.*/
					continue;
				if (values[i] >= min)
				{
					darr[((values.size() - 1) / 2) + d * k] = values[i];
					d = d * (-1);
					i++;
				}
			}
			i--;
			k++;
		}
	}
	for (size_t i = 0; i < values.size(); i++)
	{
		copy.push_back(darr[i]); /*Копирование элементов из получившегося массива в вектор для ретёрна.*/
	}

	delete[] darr;

	return copy;


}
int main()
{
	return 0;
}


