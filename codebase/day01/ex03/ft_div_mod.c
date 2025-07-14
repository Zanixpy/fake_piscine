#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a/b ;
	*mod = a%b ;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;
	pdiv = &div;
	pmod = &mod;
	a = 10;
	b = 2;

	ft_div_mod(a, b, pdiv, pmod);
	printf("Result of division : %d and rest : %d\n", *pdiv, *pmod);
	return (0);

}
