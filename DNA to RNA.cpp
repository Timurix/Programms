//https://www.codewars.com/kata/5556282156230d0e5e000089

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string DNAtoRNA(string dna) {

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'T')
			dna[i] = 'U';
	}
	return dna;
}

int main()
{
	string test= "GCAT";
	cout<<DNAtoRNA(test);

	return 0;
}


