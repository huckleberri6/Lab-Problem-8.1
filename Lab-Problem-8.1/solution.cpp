
#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main()
{
	string s = "HELLO";
	int l = countVowel(s);
	cout << l;
}

int countVowel(string str)
{
	int vowels = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str.substr(i, 1) == "a" || str.substr(i, 1) == "A")
			vowels++;
		else if (str.substr(i, 1) == "e" || str.substr(i, 1) == "E")
			vowels++;
		else if (str.substr(i, 1) == "i" || str.substr(i, 1) == "I")
			vowels++;
		else if (str.substr(i, 1) == "o" || str.substr(i, 1) == "O")
			vowels++;
		else if (str.substr(i, 1) == "u" || str.substr(i, 1) == "U")
			vowels++;
	}

	return vowels;
}