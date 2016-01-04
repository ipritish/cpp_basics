#include <string>
#include <iostream>

class Person
{
public:
    std::string m_strName;
    int m_nAge;
    bool m_bIsMale;
 
    std::string GetName() { return m_strName; }
    int GetAge() { return m_nAge; }
    bool IsMale() { return m_bIsMale; }
 
    Person(std::string strName = "", int nAge = 0, bool bIsMale = false)
        : m_strName(strName), m_nAge(nAge), m_bIsMale(bIsMale)
    {
    }
};

// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person
{
public:
    double m_dBattingAverage;
    int m_nHomeRuns;
 
    BaseballPlayer(double dBattingAverage = 0.0, int nHomeRuns = 0)
       : m_dBattingAverage(dBattingAverage), m_nHomeRuns(nHomeRuns)
    {
    }
};

int main()
{
    // Create a new BaseballPlayer object
    BaseballPlayer cJoe;
    // Assign it a name (we can do this directly because m_strName is public)
    cJoe.m_strName = "Joe";
    // Print out the name
    std::cout << cJoe.GetName() << std::endl;
 
    return 0;
}
