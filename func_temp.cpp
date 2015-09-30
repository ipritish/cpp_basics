#include<iostream>
#include<string>
using namespace std;

template<typename Container, typename Value>
Value sum(Container& c, Value v)
{
	for(auto x : c)
		v+=x;
	return v;
}

template<typename T>
class Vector{
	private:
		T* elem;
		int sz;
	public:
		Vector(int s);
		~Vector(){delete[] elem;}
		T& operator[](int i);
		const T& operator[](int i) const;
		int size() const {return sz;}
		//T* begin(Vector<T>& x){}
		//T* end(Vector<T>& x){}
};

template<typename T>
Vector<T>::Vector(int s)
{
	elem = new T[s];
	sz = s;
}

template<typename T>
T& Vector<T>::operator[](int i)
{
	return elem[i];
}

template<typename T>
T* begin(Vector<T>& x)
{
	return x.size() ? &x[0] : nullptr;
}

template<typename T>
T* end(Vector<T>& x)
{
	return begin(x)+x.size();
}
void user (Vector<int>& vi, Vector<double>& vd)
{
	int sum_int = sum(vi,0);
	cout << sum_int << "\n";
	double sum_double = sum(vd,0.0);
	cout << sum_double << "\n";
}
int main()
{
	Vector<char> vc(5);
	Vector<int> vi(5);
	Vector<double> vd(4);
	Vector<string> vs(2);
	vc[0] = 't';
	vc[1] = 's';
	vs[0] = "This is";
	vs[1] = "Spartaa!";
	vi[0] = 2;
	vi[1] = 4;
	vi[2] = 5;
	vi[3] = 6;
	vi[4] = 5;
	vd[0] = 3.65;
	vd[1] = 4.54;
	vd[2] = 4.32;
	vd[3] = 3.21;
	user(vi,vd);
	cout << vc.size() << "\n" << vi.size() << "\n";
	for (auto& s : vs)
	{
		cout << s << "\n"; 
	}
	
	return 0;
}

