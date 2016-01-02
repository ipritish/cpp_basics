#include<iostream>
#include<string>

class Point2D
{
private:
    int m_nX;
    int m_nY;
 
public:
    // A default constructor
    Point2D()
        : m_nX(0), m_nY(0)
    {
    }
 
    // A specific constructor
    Point2D(int nX, int nY)
        : m_nX(nX), m_nY(nY)
    {
    }
 
    // An overloaded output operator
    friend std::ostream& operator<<(std::ostream& out, const Point2D &cPoint)
    {
        out << "(" << cPoint.GetX() << ", " << cPoint.GetY() << ")";
        return out;
    }
 
    // Access functions
    void SetPoint(int nX, int nY)
    {
        m_nX = nX;
        m_nY = nY;
    }
 
    int GetX() const { return m_nX; }
    int GetY() const { return m_nY; }
};

class Creature
{
private:
    std::string m_strName;
    Point2D m_cLocation;
 
    // We don't want people to create Creatures with no name or location
    // so our default constructor is private
    Creature() { }
 
public:
    Creature(std::string strName, const Point2D &cLocation)
        : m_strName(strName), m_cLocation(cLocation)
    {
    }
 
    friend std::ostream& operator<<(std::ostream& out, const Creature &cCreature)
    {
        out << cCreature.m_strName << " is at " << cCreature.m_cLocation;
        return out;
    }
 
    void MoveTo(int nX, int nY)
    {
        m_cLocation.SetPoint(nX, nY);
    }
};

int main()
{
    using namespace std;
    cout << "Enter a name for your creature: ";
    std::string cName;
    cin >> cName;
    Creature cCreature(cName, Point2D(4, 7));
	
    while (1)
    {
        cout << cCreature << endl;
        cout << "Enter new X location for creature (-1 to quit): ";
        int nX=0;
        cin >> nX;
        if (nX == -1)
            break;
 
        cout << "Enter new Y location for creature (-1 to quit): ";
        int nY=0;
        cin >> nY;
        if (nY == -1)
            break;
		
        cCreature.MoveTo(nX, nY);
        }
 
    return 0;
}
