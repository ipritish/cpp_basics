#include<iostream>
#include<random>
#include<vector>
#include<string>

using namespace std;

class Rand_int{
	public:
		Rand_int(int low, int high) :dist{low,high} {}
		int operator()(){return dist(re);}
	private:
		default_random_engine re;
		uniform_int_distribution<> dist;
};

int main()
{
	Rand_int rnd{0,4};
	cout << rnd() << "\n";
	cout << rnd() << "\n";
	return 0;
}
