#include<iostream>
#include"Vector.h"
#include<cmath>

using namespace std;

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for(int i=0 ; i!= v.size();++i)
	{
		sum+=sqrt(v[i]);
	}
	return sum;
}

int main()
{
	Vector v(5);
	v[0] = 4;
	v[1] = 4;
	v[2] = 4;
	v[3] = 4;
	v[4] = 4;
	cout << sqrt_sum(v) << "\n";
}

