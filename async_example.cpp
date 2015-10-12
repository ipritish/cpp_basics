#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<functional>
#include<future>
using namespace std;

double accum (double* beg, double* end, double init)
{
	return accumulate(beg,end,init);
}

double compute(vector<double>& v)
{
	if(v.size()<10)
	{
		cout << "came here" << "\n";
		return accum(&v[0],(&v[0]+v.size()) ,0.0);
	}
	cout << "async operation" << "\n";
	auto v0 = &v[0];
	auto sz = v.size();
	//auto f0 = async(accum,v0,v0+sz/2,0.0);
	//auto f1 = async(accum,v0+sz/2,v0+sz,0.0);
	//return f0.get()+f1.get();
	return accum(v0,v0+sz,0.0);
}

int main()
{
	vector<double> vd = {2.43,4.00,4.43,0.34,4.54,4.65,7.98,43.54,23.43,4.32,4.09,6.98};
	cout << compute(vd) << "\n";
	return 0;
}
