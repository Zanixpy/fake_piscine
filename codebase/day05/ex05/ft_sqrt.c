#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	if( nb < 0 || nb == 2147483647 || nb == -2147483648 )
		return (-1);
	int n;
	n = 0;
	while( (n*n) < nb)
		n++;
	if( (n*n) == nb)
		return (n);
	else
		return (0);
}

int main(void)
{
	int n = ft_sqrt(21474836);

	printf("%d\n", n);
	return (0);
	
}
