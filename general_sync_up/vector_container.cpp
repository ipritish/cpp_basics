#include<iostream>
#include<vector>
#include"container.cpp"
using namespace std;

class Vector_container : public Container{
	public :
		Vector_container(int s) : v(s){}
		~Vector_container(){}
		double& operator[](int i) {return v[i];}
		int size() const{return v.size();}
	private :
		vector<double> v;
};

void use(Container& c)
{
	const int sz = c.size();
    for(int i=0; i!=sz; ++i)
    {
	    cout << c[i] << "\n";
	}
}

void use_vc()
{
	Vector_container vc(5);
	vc[0] = 1.23;
	vc[1] = 3.54;
	vc[2] = 4.43;
	vc[3] = 4.00;
	vc[4] = 5.65;
	use(vc);
}

int main()
{
	use_vc();
	return 0;
}
