#include "date.h"
#include <iostream>
// Date constructor
Date::Date(int nMonth, int nDay, int nYear)
{
    SetDate(nMonth, nDay, nYear);
}
 
// Date member function
void Date::SetDate(int nMonth, int nDay, int nYear)
{
    m_nMonth = nMonth;
    m_nDay = nDay;
    m_nYear = nYear;
}

int main()
{
	Date d(11,25,2015);
	std::cout << d.GetMonth() << "\n";
	return 0;
}
