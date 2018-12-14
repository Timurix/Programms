//https://www.codewars.com/kata/highest-and-lowest
//Программа работает, но на примере "42 42" на кодварсе выводится "42 0", а в visual studio выдается "42 42".

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string highAndLow(const string& numbers) {
	int ma = stoi(numbers), mi = stoi(numbers), k=0;
	for (int i = 0; i < numbers.size() - k ; i += k)
	{
		k = 1;
		const char *a = &numbers[i];
		int copy = atoi(a);
		if (copy < 0)
			k++;
		while (copy)
		{
			copy /= 10;
			k++;
		}
		const char *b = &numbers[i + k];
		ma = max(ma, atoi(b));
		mi = min(mi, atoi(b));
	}
	return to_string(ma) + " " + to_string(mi);
}

int main()
{
	string t = "810 982 426 -531 1057 -444 -477 -465 1088 -338 -470 35 -503 249 637 560 -62 443";
	//string t = "42 42"
	
	cout << highAndLow(t)<< endl;
	
	return 0;
}