#include<iostream>

using namespace std;

int main()
{
	char v[] = "a\xad\127";
	cout << v << "\n";
	return 0;
}
