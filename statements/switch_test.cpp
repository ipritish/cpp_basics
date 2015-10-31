#include<iostream>

using namespace std;

enum class Vessel {cup,glass,goblet,chalice};

void choose_vessel(Vessel v)
{
	switch(v)
	{
		case Vessel::cup:
			cout << "tis a cup" << "\n";
			break;
		case Vessel::glass:
            cout << "tis a glass" << "\n";
            break;
		case Vessel::goblet:
            cout << "tis a goblet be careful" << "\n";
            break;
		case Vessel::chalice:
            cout << "tis a chalice you are lucky" << "\n";
            break;
	}
}

int main()
{
	Vessel v = Vessel::chalice;
	choose_vessel(v);
	return 0;
}
