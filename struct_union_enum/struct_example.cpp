#include<iostream>
#include<string>

using namespace std;

struct Address{
	const char* name;	
	int number;
	const char* street;
	const char* town;
	char state[2];
	const char* zip;
};

void print_addr(const Address* p)
{
	cout << p->name << "\n" << p->number << " " << p->street << "\n" << p->town << "\n" << p->state[0] << p->state[1] << " " << p->zip << "\n";
}

int main()
{
	Address jd = {
		"Jim Dandy",
		61, "South St",
		"New Province",
		{'N','J'},"0794"
	};
	Address *p = &jd;
	print_addr(p);
	return 0;
}
