#include<iostream>

class Point
{
private:
    double m_dX, m_dY, m_dZ;
 
public:
    Point(double dX=0.0, double dY=0.0, double dZ=0.0)
    {
    	m_dX = dX;
    	m_dY = dY;
    	m_dZ = dZ;
    }
 
    friend std::ostream& operator<< (std::ostream &out, Point &cPoint);
    friend std::istream& operator>> (std::istream &in, Point &cPoint);
 
    double GetX() { return m_dX; }
    double GetY() { return m_dY; }
    double GetZ() { return m_dZ; }
};
 
std::ostream& operator<< (std::ostream &out, Point &cPoint)
{
    // Since operator<< is a friend of the Point class, we can access
    // Point's members directly.
    out << "(" << cPoint.m_dX << ", " <<
        cPoint.m_dY << ", " <<
        cPoint.m_dZ << ")";
    return out;
}
 
std::istream& operator>> (std::istream &in, Point &cPoint)
{
    in >> cPoint.m_dX;
    in >> cPoint.m_dY;
    in >> cPoint.m_dZ;
    return in;
}

int main()
{
	using namespace std;
    cout << "Enter a point: " << endl;
 
    Point cPoint;
    cin >> cPoint;
 
    cout << "You entered: " << cPoint << endl;
 
    return 0;
}
