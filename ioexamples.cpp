#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Entry{
	string name;
	int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
	return os << "{\"" << e.name << "\"," << e.number << "}";
}

int main()
{
	Entry e = {"My name" , 123};
	cout << e << "\n";
	return 0;
}
