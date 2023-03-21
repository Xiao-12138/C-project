#include "swap.h"

int swap(int a, int b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	std::cout << "a= " << a << endl;
	std::cout << "b= " << b << endl;

	return 0;
}
