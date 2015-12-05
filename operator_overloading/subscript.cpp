#include<iostream>

class IntList
{
private:
    int m_anList[10];
 
public:
    int& operator[] (const int nIndex);
};
 
int& IntList::operator[] (const int nIndex)
{
    return m_anList[nIndex];
}

int main()
{
	IntList cMyList;
    cMyList[2] = 3; // set a value
	std::cout << cMyList[2] << std::endl; // get a value
 
    return 0;
}
