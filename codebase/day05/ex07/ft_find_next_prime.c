#include <stdio.h>

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if( nb == 0 || nb == 1)
		return (2);
	else if( nb < 0)
		return (-1);
	int n;

	n = 2;
	while( n < nb )
	{
		n++;
		if((nb != n) && ((nb % n) == 0))
		{
			nb++;
			n = 2;
		}
	}
	return (nb);
}

int main(void)
{
	int n = ft_find_next_prime(0);

	printf("%d\n", n);
	return (0);

}
