#include "main.h"
void obtain_residue(unsigned long int n)
{
	int Q;
	unsigned long int R;
	while (n < 2 || count >= 0)
	{
		n = n - 2;
		count++;
	}
	Q = count;
	R = n;
	obtain_residue(Q);
}
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int b;
	obtain_residue(n);
}
