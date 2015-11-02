#include<iostream>
#include<string>

class Cents
{
private:
    int m_nCents;
 
public:
    Cents(int nCents) { m_nCents = nCents; }
 
    // Add Cents + Cents
    //friend Cents operator+(const Cents &c1, const Cents &c2);
 
    int GetCents(){return m_nCents;}
};
 
// note: this function is not a member function!
Cents operator+(Cents &c1, Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.GetCents() + c2.GetCents());
}
 
int main()
{
    Cents cCents1(6);
    Cents cCents2(8);
    Cents cCentsSum = cCents1 + cCents2;
    std::cout << "I have " << cCentsSum.GetCents() << " cents." << std::endl;
 
    return 0;
}
