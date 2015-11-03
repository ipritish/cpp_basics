#include<iostream>
#include<string>

using namespace std;

int main()
{
	int size;
	cout << "give number of strings" << "\n";
	cin >> size;
	string *values = new string[size];
	for(int i=0; i!=size; ++i)
	{
		cout << "number# " << i << " value: " << "\t";
		cin >> values[i];
	}
	cout << values[0];
	return 0;
}
