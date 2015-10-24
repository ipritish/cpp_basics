#include<iostream>

using namespace std;

int main()
{
	int var = 1;
	int& r {var};
	int x = r;
	r = 2;
	cout << var << "\n";
	return 0;
}
