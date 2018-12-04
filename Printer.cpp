//https://www.codewars.com/kata/printer-errors
//Про функцию to_string() знаю. 

#include "pch.h"
#include <iostream>
#include<string>

using namespace std;

class Printer
{
public:
	static string printerError(const string &s)
	{
		int a = 0, b = s.length(), c = 0;
		string res1 = "", res2 = "";
		for (int i = 0; i < s.length(); i++)
		{
			if ((int)s[i] < 97 || (int)s[i]>109)
				a++;
		}
		while (a)
		{
			c = a % 10;
			a /= 10;
			res1 = (char)(c + 48) + res1;
		}
		while (b)
		{
			c = b % 10;
			b /= 10;
			res2 = (char)(c + 48) + res2;
		}
		return res1 + "/" + res2;

	};
};

int main()
{
	Printer t;
    cout <<t.printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu");
}

