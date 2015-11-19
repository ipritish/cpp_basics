#include <iostream>
#include <cmath>
 
// return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqual(double a, double b, double absEpsilon, double relEpsilon)
{
	// Check if the numbers are really close -- needed when comparing numbers near zero.
    double diff = fabs(a - b);
    if (diff <= absEpsilon)
        return true;

    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int main()
{
    // a is really close to 1.0, but has rounding errors, so it's slightly smaller than 1.0
    double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
 
    // First, let's compare a (almost 1.0) to 1.0.
    std::cout << approximatelyEqual(a, 1.0, 1e-12,1e-8) << "\n";
 
    // Second, let's compare a-1.0 (almost 0.0) to 0.0
    std::cout << approximatelyEqual(a-1.0, 0.0, 1e-12,1e-8) << "\n";
	return 0;
}
