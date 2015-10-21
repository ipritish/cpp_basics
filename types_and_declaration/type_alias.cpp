#include<iostream>

using namespace std;

int main()
{
	char p = 'A';
	using Pchar = char*;
	Pchar p1 = &p;
	cout << *p1 << "\n";
	return 0;
}
