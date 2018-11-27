//https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string how_much_i_love_you(int nb_petals) {
	string a[6] = { "I love you","a little","a lot","passionately","madly","not at all" };
	string b;
	if (nb_petals > 10)
	{
		if (nb_petals % 6 != 0)
			b = a[(nb_petals % 6) - 1];
		else
			b = a[5];
	}
	if (nb_petals > 6 && nb_petals <= 10)
		b = a[(nb_petals / 6) - 1];
	if (nb_petals <= 6)
		b = a[nb_petals - 1];
	return b;
}

int main()
{
	cout << how_much_i_love_you(37);
	
	
	return 0;
}