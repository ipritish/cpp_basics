#include<iostream>

class Cents
{
private:
    int m_nCents;
 
public:
    Cents(int nCents) { m_nCents = nCents; }
 
    // Overload -cCents
    Cents operator-();
	Cents operator+(int nCents);

	int GetCents() { return m_nCents; }
};
 
// note: this function is a member function!
Cents Cents::operator-()
{
    return Cents(-m_nCents);
}

Cents Cents::operator+(int nCents)
{
    return Cents(m_nCents + nCents);
}


int main()
{
	Cents cent(5);
	Cents neg_cent = -cent;
	Cents add_cent = cent + 5;
	std::cout << neg_cent.GetCents() << std::endl;	
	std::cout << add_cent.GetCents() << std::endl;
	return 0;
}
