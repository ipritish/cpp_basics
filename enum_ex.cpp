#include<iostream>

using namespace std;

enum class Traffic_light {red,green,yellow};

Traffic_light& operator++(Traffic_light& t)
{
	switch(t)
	{
		case Traffic_light::green:
			return t=Traffic_light::yellow;
		case Traffic_light::yellow:
			return t=Traffic_light::red;
		case Traffic_light::red:
			return t=Traffic_light::green;
				
	}
}

int main()
{
	Traffic_light light = Traffic_light::red;
	Traffic_light next = ++light;
    //cout << next << "\n";
	if(next == Traffic_light::green)
	{
		cout << "Hurrah!"<< "\n";
	}
	return 0;
}
