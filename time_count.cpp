#include<iostream>
#include<chrono>
#include<cstdlib>
using namespace std::chrono;

int fact(int number)
{
	int result = 1;
	for (auto i=1 ; i<=number ; ++i)
		result = result*i;
	return result;
}
int main(int argc, char* argv[])
{
	auto t0 = high_resolution_clock::now();
	std::cout << "arg count " << argc << "\n";
	std::cout << "arguement " << atoi(argv[1]) << "\n";
	std::cout << fact(atoi(argv[1])) << "\n";
	auto t1 = high_resolution_clock::now();
	std::cout << duration_cast<milliseconds>(t1-t0).count() <<  "msec\n";
	return 0;
}
