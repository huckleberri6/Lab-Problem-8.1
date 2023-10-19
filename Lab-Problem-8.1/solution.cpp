
#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main()
{
	string s = "hello";
	int l = countCharacter(s);
	cout << l;
}

int countCharacter(string str)
{
	return str.length();
}