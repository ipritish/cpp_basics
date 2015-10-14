#include<iostream>
#include<string>
using namespace std;

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

int main()
{
	Vector<char> vc(5);
	Vector<int> vi(10);
	Vector<string> vs(2);
	vc[0] = 't';
	vc[1] = 's';
	vs[0] = "This is";
	vs[1] = "Spartaa!";
	cout << vc.size() << "\n" << vi.size() << "\n";
	for (auto& s : vs)
	{
		cout << s << "\n"; 
	}
	return 0;
}

