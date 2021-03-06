//https://www.codewars.com/kata/5bd776533a7e2720c40000e5

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
	vector <int> test;
	test.push_back(11);
	test.push_back(-16);
	test.push_back(-18);
	test.push_back(13);
	test.push_back(-11);
	test.push_back(-12);
	test.push_back(3);
	test.push_back(18);
	test = Pendulum(test);
	for (int i = 0; i < test.size(); i++)
	{
		cout << test[i] << " ";
	}
	return 0;
}


