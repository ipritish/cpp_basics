#include<iostream>
#include<thread>

using namespace std;

void f()
{
	cout << "Hello World!" << "\n";
}

struct F{
	void operator()(){cout << "Parallel World!" << "\n";}
};

int main()
{
	thread t1 {f};

	thread t2 {F()};

	t1.join();
	t2.join();
	return 0;
}
