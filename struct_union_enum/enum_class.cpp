#include<iostream>

using namespace std;

enum class Printer_flags {
	none = 0,
	acknowledge=1,
	paper_empty=2,
	busy=4,
	out_of_black=8,
	out_of_color=16
};

int main()
{
	Printer_flags flag = Printer_flags::acknowledge;
	cout << static_cast<int>(flag) << "\n";
	return 0;
}
