#include<iostream>
using namespace std;

class Vector
{
	public : 

		Vector(std::initializer_list<double>);
		int size();
	private :
		double* elem;
	    int sz;

};

Vector::Vector(std::initializer_list<double> lst) : elem{new double[lst.size()]},sz {static_cast<int>(lst.size())}
{
	copy(lst.begin(),lst.end(),elem);
}

int Vector::size()
{
	    return sz;
}

int main()
{
	Vector v1 = {1.23,3.45,6.7,8,5.67,3.4,5.6};
	cout << v1.size() << "\n";
}
