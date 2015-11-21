#include<iostream>

enum Colors
{
    COLOR_BLACK,
    COLOR_WHITE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
	COLOR_UNKNOWN
};
 
void printColor(Colors color)
{
    switch (color)
    {
        case COLOR_BLACK:
            std::cout << "Black" << "\n";
            break;
        case COLOR_WHITE:
            std::cout << "White" << "\n";
            break;
        case COLOR_RED:
            std::cout << "Red" << "\n";
            break;
        case COLOR_GREEN:
            std::cout << "Green" << "\n";
            break;
        case COLOR_BLUE:
            std::cout << "Blue" << "\n";
            break;
        case COLOR_UNKNOWN:
            std::cout << "Unknown" << "\n";
            break;
    }
}
void printMessage()
{
	std::cout << "Which color do you like\nGive the value for your choice\n";
	std::cout << "1 for Black\n" << "2 for White\n" << "3 for Red\n" << "4 for Green\n" << "5 for blue\n";
	std::cout << "Only give number as your choice";
}

Colors colorChooser(int i)
{
	Colors toRet;
	switch (i)
    {
        case 1:
            toRet = Colors::COLOR_BLACK;
            break;
		case 2:
            toRet = Colors::COLOR_WHITE;
            break;
		case 3:
            toRet = Colors::COLOR_RED;
            break;
		case 4:
            toRet = Colors::COLOR_GREEN;
            break;
		case 5:
            toRet = Colors::COLOR_BLUE;
            break;
        default:
            toRet = Colors::COLOR_UNKNOWN;
			break;
	}
	return toRet;
}
int main()
{
	printMessage();
	int i;
	std::cin >> i; 
	Colors col = colorChooser(i);
	printColor(col);
	return 0;
}
