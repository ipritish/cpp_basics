#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

struct Entry{
        string name;
        int number;
};

list<Entry> phone_book = {
    {"Pritish Jain" , 987312},
    {"Me",983298},
    {"You", 7382398}
};
int get_number(const string& s)
{
    for(const auto& x : phone_book)
	if(x.name==s)
	    return x.number;
    
    return 0;   
}
int main()
{
    cout << get_number("Me") << "\n";
    return 0;
}
