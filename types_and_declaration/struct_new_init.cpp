#include<iostream>

using namespace std;

struct Date{
	int d;
	int m;
	int y;
};

int day(Date* p)
{
	return p->d;
}
int main()
{
	Date p = {3,5,2015};
	//*p = {3,5,2015};
	Date *q = &p;
	cout << day(q) << "\n";
	return 0;
}
