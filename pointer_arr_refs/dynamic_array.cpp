#include <iostream>
 
int main()
{
    std::cout << "Enter a positive integer: ";
    int size;
    std::cin >> size;
 
    int *array = new int[size]; // use array new.  Note that size does not need to be constant!
 
    std::cout << "I just allocated an array of size " << size << '\n';
 
    array[0] = 5; // set element 0 to value 5
 
    delete[] array; // use array delete to deallocate array
    array = nullptr; // use nullptr instead of 0 in C++11
 
    return 0;
}
