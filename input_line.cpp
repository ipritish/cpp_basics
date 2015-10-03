#include<iostream>
#include<string>

using namespace std;
int main()
{
	cout << "Please Enter your name" << "\n";
	string str;
	getline(cin,str);
	cout << "Hello, " << str << "\n";
	return 0;
}
