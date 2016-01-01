#include <iostream>
#include <cassert>

class Cents
{
private:
    int m_nCents;
public:
    Cents(int nCents=0)
    {
        m_nCents = nCents;
    }
 
    // Overloaded int cast
    operator int() { return m_nCents; }
 
    int GetCents() { return m_nCents; }
    void SetCents(int nCents) { m_nCents = nCents; }
};

class Dollars
{
private:
    int m_nDollars;
public:
    Dollars(int nDollars=0)
    {
        m_nDollars = nDollars;
    }
 
     // Allow us to convert Dollars into Cents
     operator Cents() { return Cents(m_nDollars * 100); }
};

void PrintInt(int nValue)
{
    std::cout << nValue << std::endl;
}

void PrintCents(Cents cCents)
{
    std::cout << cCents.GetCents() << std::endl;
}

int main()
{
    Cents cCents(7);
    PrintInt(cCents); // print 7
	Dollars cDollars(9);
    PrintCents(cDollars); // cDollars will be cast to a Cents 
    return 0;
}
