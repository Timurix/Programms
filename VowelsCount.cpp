//https://www.codewars.com/kata/vowel-count

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr) {
	string arr = "aeiou";
	int k = 0;
	for (int i = 0; i < inputStr.size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			if (inputStr[i] == arr[j])
				k++;
		}
	}
	return k;
}

int main()
{
	string t = "abracadabra";
	cout << getCount(t);
	
	return 0;
}