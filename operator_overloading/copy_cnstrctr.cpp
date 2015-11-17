#include<iostream>

class Cents
{
private:
    int m_nCents;
public:
    Cents(int nCents=0)
    {
        m_nCents = nCents;
    }

	int getCents()
	{
		return m_nCents;
	}
 
    // Copy constructor
    Cents(const Cents &cSource)
    {
        m_nCents = cSource.m_nCents;
    }
};

int main()
{
	Cents cMark(5); // calls Cents constructor
	Cents cNancy = cMark; // calls Cents copy constructor!
	std::cout << cNancy.getCents() << "\n";	
	return 0;
}
