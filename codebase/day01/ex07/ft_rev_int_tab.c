#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int tab_temp[size];
	int n;
	n = 0;
	while(n < size)
	{
		tab_temp[size-1-n] = *(tab+n);
		n++;
	}
	n=0;
	while( n < size)
	{
		*(tab+n)=tab_temp[n];
		n++;
	}
}

int main(void)
{
	int tmp[10];
	int *tab;
	tmp[0] = 0;
	tmp[1] = 1;
	tmp[2] = 2;
	tmp[3] = 3;
	tmp[4] = 4;
	tmp[5] = 5;
	tmp[6] = 6;
	tmp[7] = 7;
	tmp[8] = 8;
	tmp[9] = 9;
	tab= &tmp[0];
	int n;
	n = 0;
	while(n < 10)
	{
		printf("Premier nombre avant ft_rev_int_tab : %d\n", *(tab+n));
		n++;
	}
	
	ft_rev_int_tab(tab,10);
	n = 0;
	while(n < 10)
	{
		printf("Premier nombre apres ft_rev_int_tab : %d\n", *(tab+n));
		n++;
	}

	return (0);
}

