#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	i = 0;
	j = i + 1;
	while(i < size)
	{
		while(j < size)
		{
			if(*(tab+j)<*(tab+i))
			{
				temp = *(tab+j);
				*(tab+j)= *(tab+i);
				*(tab+i) = temp;
			}
			j++;

		}
		i++;
		j = i + 1;
	}


}

int main(void)
{
	int tmp[6];
	int *tab;
	tmp[0] = 4;
	tmp[1] = 85;
	tmp[2] = 32;
	tmp[3] = 74;
	tmp[4] = 8;
	tmp[5] = 1;;
	tab= &tmp[0];

	int n;
	n = 0;
	while(n < 6)
	{
		printf("Premier nombre avant sort : %d\n", *(tab+n));
		n++;
	}

	ft_sort_int_tab(tab,6);
	n = 0;
	while(n < 6)
	{
		printf("Premier nombre apres sort : %d\n", *(tab+n));
		n++;
	}

	return (0);

}
