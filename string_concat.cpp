#include<iostream>
#include<string>

using namespace std;

string compose (const string& a, const string& b)
{
	return a + "@" + b;
}

int main()
{
	cout << compose("my_name","my_name.com") << "\n";
	return 0;
}
