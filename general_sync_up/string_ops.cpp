#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name = "Pritish Jain";
	string s = name.substr(6,10);
	cout << s << "\n";
	name.replace(0,6,"pulkit");
	name[0] = toupper(name[0]);
	cout << name << "\n";
	return 0;
}

