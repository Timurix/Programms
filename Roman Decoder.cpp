//https://www.codewars.com/kata/51b6249c4612257ac0000005
//Программа полнстью работает, но на кодварсе не работают пару тестов, т.к. они сломаны.

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int solution(string roman) {
	int *num = new int[roman.length()];
	int sum = 0;

	for (size_t i = 0; i < roman.length(); i++)
	{
		if (roman[i] == 'I')
			num[i] = 1;

		if (roman[i] == 'V')
			num[i] = 5;

		if (roman[i] == 'X')
			num[i] = 10;

		if (roman[i] == 'L')
			num[i] = 50;

		if (roman[i] == 'C')
			num[i] = 100;

		if (roman[i] == 'D')
			num[i] = 500;

		if (roman[i] == 'M')
			num[i] = 1000;
	}
	
	if (roman.length() > 3)
	{
		for (size_t i = 0; i < roman.length(); i++)
		{
		
				if ((num[i] == num[i + 1]) && (num[i] != num[i + 2]))
				{
					sum += 2 * num[i];
					i++;
					continue;
				}
				if ((num[i] == num[i + 1]) && (num[i] == num[i + 2]))
				{
					sum += 3 * num[i];
					i += 2;
					continue;
				}
				if (i == roman.length() - 1)
				{
					sum += num[i];
					i++;
					continue;
				}
				if (num[i] > num[i + 1])
				{
					if (num[i + 1] > num[i + 2])
					{
						if (num[i + 1] == num[roman.length() - 1])
						{
							sum += num[i] + num[i + 1];
							i++;
							continue;
						}
						if (num[i + 2] < num[i + 3])
						{
							sum += num[i + 3] - num[i + 2] + num[i + 1] + num[i];
							i += 3;
							continue;
						}
						sum += num[i] + num[i + 1] + num[i + 2];
						if ((num[i + 3] == num[roman.length()-1])) 
						{
							sum += num[i+3];
							i++;
						}
						i += 2;
						continue;
					}
					if (num[i + 2] > num[i + 1])
					{
						sum += num[i + 2] - num[i + 1] + num[i];
						i += 2;
						continue;
					}
					if (num[i + 1] == num[i + 2])
					{
						if (num[i + 2] == num[i + 3])
						{
							sum += num[i] + num[i + 1] + num[i + 2] + num[i + 3];
							i += 3;
							continue;
						}
						sum += num[i] + num[i+1] + num[i+2];
						i += 2;
						continue;
					}
					
				}
				if (num[i] < num[i + 1])
				{
					if (num[i + 1] == num[roman.length() - 1])
					{
						sum += num[i + 1]-num[i];
						i++;
						continue;
					}
					sum += num[i + 1] - num[i];
					i++;
					continue;
				}
			
		}
	}
	if (roman.length() == 3)
	{
		if ((num[0] == num[1]) && (num[0] != num[2]))
			sum += 2 * num[0] + num[2];
		if ((num[0] == num[1]) && (num[0] == num[2]))
			sum += 3 * num[0];
		if (num[1] < num[2])
			sum += num[2] - num[1] + num[0];
		if ((num[0] > num[1]) && (num[1] == num[2]))
			sum += num[0] + num[1] + num[2];
		if ((num[0] > num[1]) && (num[1] > num[2]))
			sum += num[0] + num[1] + num[2];
		if (num[0] < num[1])
			sum += num[1] - num[0] + num[2];
	}
	if (roman.length() == 1)
		sum += num[0];
	if (roman.length() == 2)
	{
		if (num[0] < num[1])
			sum += num[1] - num[0];
		if (num[0] > num[1])
			sum += num[0] + num[1];
		if (num[0] == num[1])
			sum += 2 * num[0];
	}
	
	
	//for (size_t i = 0; i < roman.length(); i++)
	//{
	//	cout << num[i] << " ";
	//	//sum += num[i];
	//}
	delete[] num;
	return sum;
}

int main()
{
	string num = "MMXVIII";
	cout <<"\n"<<solution(num);


	return 0;
}


