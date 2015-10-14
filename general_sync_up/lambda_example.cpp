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

template<typename C, typename P>
int count(C& c, P pred)
{
	int cnt = 0;
	for (auto& x : c)
	{
		if(pred(x))
		{
			++cnt;
		}
	}
	return cnt;
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
	vi[0] = 21;
	vi[1] = 44;
	vi[2] = 54;
	vi[3] = 26;
	vi[4] = 25;
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

	int x = 42;
	cout << "number of value less than " << x << " :  " << count(vi,[&](int a){return a<x;}) << "\n";
	
	return 0;
}

