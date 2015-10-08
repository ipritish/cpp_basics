#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>

using namespace std;

map<string,int> phone_book {
    {"Pritish Jain" , 987312},
    {"Me",983298},
    {"You", 7382398}
};
int get_number(const string& s)
{
    return phone_book[s];   
}
int main()
{
    cout << get_number("Me") << "\n";
    return 0;
}

