#include<iostream>

using namespace std;

void init_arr(int *m, int dim1, int dim2)
{
	for(int i=0; i!=dim1; i++)
	{
		for(int j=0; j!=dim2; j++)
		{
			m[i*dim2+j] = 10*i+j;
		}
	}
}

void print_arr(int *m, int dim1, int dim2)
{
	for(int i=0; i!=dim1; i++)
    {
        for(int j=0; j!=dim2; j++)
        {
            cout << m[i*dim2+j] << " ";
        }
		cout << "\n";
    }
	cout << "\n";
}

int main()
{
	int m[3][5];
	init_arr(&m[0][0],3,5);
	print_arr(&m[0][0],3,5);
	return 0;
}
