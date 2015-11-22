#include<iostream>

void printValues(int x, int y=10)
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}
 
int main()
{
    printValues(1); // y will use default parameter of 10
    printValues(3, 4); // y will use user-supplied value 4
	return 0;
}
