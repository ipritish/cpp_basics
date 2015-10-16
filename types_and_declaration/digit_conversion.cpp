#include<iostream>

using namespace std;

void digits()
{
	for(int i=0; i!=10; ++i)
		cout << static_cast<char>('0'+i) << "\t";
		
	cout << "\n";
}

int main()
{
	digits();	
	return 0;
}
