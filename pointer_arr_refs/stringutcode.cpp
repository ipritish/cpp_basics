#include<iostream>
#include<string>
using namespace std;
int main()
{
	const char* printer = u8"The official vowels in Danish are: a, e, i, o, u, \u00E6, \u00F8, \u00E5 and y";
	cout << printer << "\n";
	return 0;
}
