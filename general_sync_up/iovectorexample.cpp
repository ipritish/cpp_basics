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

vector<Entry> phone_book = {
	{"Pritish Jain",123456},
	{"My_name",654321},
	{"name it is",453423}
};

void print_book(const vector<Entry>& book)
{
	for(const auto& x : book)
		cout << x << "\n";
}
int main()
{
	//Entry e = {"My name" , 123};
	//cout << e << "\n";
	print_book(phone_book);
	return 0;
}
