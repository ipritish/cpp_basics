#include<iostream>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

template<typename T>
using Iterator = typename T::iterator;

template<typename C, typename V>
vector<Iterator<C>> find_all(C& c, V v)
{
	vector<Iterator<C>> res;
	for (auto p = c.begin(); p!=c.end(); ++p)
	{
		if(*p == v)
			res.push_back(p);
	}
	return res;
}

int main()
{
	string m {"Mary had a little lamb"};
	for(auto p : find_all(m,'a'))
	{
		if(*p!='a')
			cerr << "string bug" << "\n";
	}

	vector<string> vs {"red","green","blue","orange","green"};
	for(auto p : find_all(vs,"red"))
    {
        if(*p!="red")
            cerr << "vector bug" << "\n";
    }
	return 0;
}
