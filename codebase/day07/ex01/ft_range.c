#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	if(min >= max)
		return (NULL);
	int *tab;
	int n;
	int o;

	tab = malloc((max-min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	n = min;
	o = 0;

	while( o < (max-min))
	{
		tab[o] = n;
		n++;
		o++;
	}
	return tab;
}

int main(void)
{
	int *tab;
	tab = ft_range(-4,10);
	
	int n = 0;
	while( n < 14)
	{
		printf("%d\n",tab[n]);
		n++;
	}

	free(tab);
	return (0);

}
