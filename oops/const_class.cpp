#include<iostream>

class Something
{
public:
    int m_nValue;
 
    Something(int m) { m_nValue = m; }
 
    void ResetValue() { m_nValue = 0; }
    void SetValue(int nValue) { m_nValue = nValue; }
 
    int GetValue() const { return m_nValue; }
};
 
int main()
{
    const Something cSomething(5); // calls default constructor
	Something ncSomething(6);
	std::cout << ncSomething.GetValue() << "\n"; 
    //cSomething.m_nValue = 5; // violates const
    //cSomething.ResetValue(); // violates const
    //cSomething.SetValue(5); // violates const
 	std::cout << cSomething.GetValue() << "\n";
    return 0;
}
