#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main(void)
{
	int a;
	int b;
	a = 1453 ;
	b = 27 ;
	int *pA;
	int *pB;
	pA = &a;
	pB = &b;
	printf(" a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(pA, pB);
	printf(" a : %d, b : %d\n", a, b);
	return (0);



}
