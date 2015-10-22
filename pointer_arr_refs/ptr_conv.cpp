#include<iostream>

using namespace std;

int main()
{
	int *p1,v;
	v = 10;
	p1 = &v;
	void* pv = p1;
	int *p2 = static_cast<int*>(pv);
	cout << *p2 << "\n";
	return 0;
}


