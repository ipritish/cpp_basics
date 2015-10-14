#include<iostream>
#include<valarray>

using namespace std;

void foo(valarray<double> a1, valarray<double>& a2)
{
	valarray<double> a = a1*3.14 + a2/a1;
	for(auto v : a)
		cout << v << "\n";
}

int main()
{
	valarray<double> a1 {4,4,4,4};
	valarray<double> a2 {4,4,4,4};
	foo(a1,a2);
	return 0;
}
