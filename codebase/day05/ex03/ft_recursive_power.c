#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if( power < 0)
		return (0);
	if( power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb,power-1)) ;
}

int main(void)
{
	int n = ft_recursive_power(5,2);

	printf("%d\n", n);
	return (0);
}
