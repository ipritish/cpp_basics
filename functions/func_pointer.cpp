#include<iostream>

int foo(int x)
{
    return x;
}
 
int main()
{
    int (*fcnPtr)(int) = foo; // assign fcnPtr to function foo
    std::cout << fcnPtr(10) << "\n"; // call function foo(5) through fcnPtr.
 
    return 0;
}
