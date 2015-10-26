#include<iostream>
#include<string>
using namespace std;

template<typename T>
void swap(T& a, T& b)
{
	T tmp {move(a)};
	a = move(b);
	b = move(tmp);
}

int main()
{
	string a {"Jain"};
	string b {"Pritish"};
	cout << a << " " << b << "\n";
	swap(a,b);
	cout << a << " " << b << "\n";
	return 0;
}
