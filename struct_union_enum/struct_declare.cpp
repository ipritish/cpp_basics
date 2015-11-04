#include <iostream>
 
struct Fraction
{
    int numerator;
    int denominator;
};
 
void multiply(Fraction f1, Fraction f2)
{
    using namespace std;
 
    // Don't forget the static cast, otherwise the compiler will do integer division!
    cout << static_cast<float>(f1.numerator * f2.numerator) /
        (f1.denominator* f2.denominator);
}
 
int main()
{
    using namespace std;
 
    // Allocate our first fraction
    Fraction f1;
    cout << "Input the first numerator: ";
    cin >> f1.numerator;
    cout << "Input the first denominator: ";
    cin >> f1.denominator;
 
    // Allocate our second fraction
    Fraction f2;
    cout << "Input the second numerator: ";
    cin >> f2.numerator;
    cout << "Input the second denominator: ";
    cin >> f2.denominator;
 
    multiply(f1, f2);
 
    return 0;
}
