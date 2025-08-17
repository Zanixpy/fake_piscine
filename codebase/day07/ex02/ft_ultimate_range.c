#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	if(min >= max)
	{
		*range = NULL;
		return (0);
	}
	int *tab;
	int n;
	int o;

	tab = malloc((max-min) * sizeof(int));
	if (tab == NULL)
		return (-1);
	n = min;
	o = 0;
	while( o < (max-min))
	{
		tab[o] = n;
		n++;
		o++;
	}
	*range = tab;
	return  (max-min);
}

int main(void)
{
	int *tab;
	int len = ft_ultimate_range(&tab,4,21);
	printf("%d\n",len);
	free(tab);
	return (0);


}
