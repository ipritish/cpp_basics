#include<iostream>

using namespace std;

class Vector{
	private : 
		double* elem;
		int sz;
	public:
		Vector(int s);
		~Vector(){delete[] elem;}
		Vector(const Vector& a);
		Vector& operator=(const Vector& a);
		double& operator[](int i);
		const double& operator[](int i) const;
		int size();

};

Vector::Vector(int s)
{
	elem = new double[s];
	sz = s;
}

double& Vector::operator[](int i)
{
	return elem[i];
}

int Vector::size()
{
	return sz;
}

Vector::Vector(const Vector& a) : elem{new double[sz]},sz{a.sz}
{
	for (int i=0 ; i!=a.sz ; ++i)
		elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a)
{
	double* p = new double[a.sz];
	for (int i=0 ; i!=a.sz; ++i)
		p[i] = a.elem[i];
	delete[] elem;
	elem = p;
	sz = a.sz;
	return *this;
}

int main()
{
	Vector v1(5);
	v1[0] = 2.43;
	v1[1] = 4.32;
	v1[2] = 4;
	v1[3] = 6.43;
	v1[4] = 4.65;
	Vector v2(5);
	//Vector v3(v1.size());
	v2=v1;
	for (int i=0 ; i!=v2.size() ; ++i)
		cout << v2[i] << "\n";
} 
