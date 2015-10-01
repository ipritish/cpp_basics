#include<iostream>

using namespace std;

template<typename T>
class Less_than{
	const T val;
	public:
		Less_than(const T& v) : val(v){}
		bool operator()(const T& x) const {return x<val;}
};

int main()
{
	Less_than<int> lti{42};
	Less_than<string> ltd{"Backus"};

	if(lti(43))
		cout << "yay" << "\n";
	else
		cout << "ahh!" << "\n";
	return 0;
}
