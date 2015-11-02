#include<iostream>
#include<vector>
#include<string>

using namespace std;

enum class Kind : char{
	name,number,end,
	plus='+', minus='-',mul='*',div='/',
	print=';',assign='=',lp='(',rp=')'
};

struct Token{
	Kind kind;
	string string_value;
	double number_value;
};

class Token_stream{
	public:
		Token get();
		const Token& current;
};

int main()
{
	return 0;
}
