#include<iostream>
#include<array>

using namespace std;

struct Point{
	int x,y;
};

ostream& operator<<(ostream& os, Point p)
{
	return os << "{" << p.x << "," << p.y << "}";
}

template<typename T, unsigned int N>
void print(const array<T,N>& a)
{
	for(int i=0; i!=a.size();++i)
	{
		cout << a[i] << "\n";
	}
}

int main()
{
	array<Point,3> points {{{1,2},{3,4},{5,6}}};
	print(points);
	return 0;
}
