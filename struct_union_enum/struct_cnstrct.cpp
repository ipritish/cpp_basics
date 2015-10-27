#include<iostream>
#include<string>

using namespace std;

struct Address{
    string name;
    int number;
    string street;
    string town;
    char state[2];
    int zip;
	Address(const string& n, int nu, const string& s, const string& t, const string& st, int z);
};

Address::Address(const string& n, int nu, const string& s, const string& t, const string& st, int z) :name{n},number{nu},street{s},town{t}
{
	if(st.size()!=2)
		cout << "State abbreviation should be two characters" << "\n";
	state[0] = st.at(0);
	state[1] = st.at(1);
	//ostringstream ost;
	//ost << z;
	//string zi{ost.str()};
	//switch(zi.size())
	//{
	//	case 5:
	//		zip = {zi[0],zi[1],zi[2],zi[3],zi[4]};
	//		break;
	//	case 4:
	//		zip = {'0',zi[0],zi[1],zi[2],zi[3]};
	//		break;
	//	default:
	//		cout << "unexpected ZIP code format" << "\n";
	//}
	zip = z;
}

void print_addr(Address& p)
{
    cout << p.name << "\n" << p.number << " " << p.street << "\n" << p.town << "\n" << p.state[0] << p.state[1] << " " << p.zip << "\n";
}

int main()
{
	Address jd = {
		"Jim Dandy",
		61,"South St",
		"New Providence",
		"NJ",7974
		};
	Address pj = {
		"Pritish Jain",
		21,"Bajanai",
		"Chennai",
		"TN",60094
		};
	print_addr(jd);
	print_addr(pj);
	return 0;
}
