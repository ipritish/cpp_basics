#include <cassert>
#include <iostream>
class Fraction
{
private:
    int m_nNumerator;
    int m_nDenominator;
 
public:
    // Default constructor
    Fraction(int nNumerator=0, int nDenominator=1)
    {
        assert(nDenominator != 0);
        m_nNumerator = nNumerator;
        m_nDenominator = nDenominator;
    }
 
    int GetNumerator() { return m_nNumerator; }
    int GetDenominator() { return m_nDenominator; }
    double GetFraction() { return static_cast<double>(m_nNumerator) / m_nDenominator; }
};

int main()
{
	Fraction cDefault; // will call Fraction(0, 1)
	Fraction cSix(6); // will call Fraction(6, 1)
	Fraction cFiveThirds(5,3); // will call Fraction(5,3)
	std::cout << cDefault.GetFraction() << "\n";
	std::cout << cSix.GetFraction() << "\n";
	std::cout << cFiveThirds.GetFraction() << "\n";
	return 0;
}
