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
	Date *p = new Date;
	*p = {3,5,2015};
	cout << day(p) << "\n";
	return 0;
}
