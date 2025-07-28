#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	if(nb == 0 || nb == 1)
		return (0);
	int n;

	n = 2;
	while( (nb % n) != 0 && n < nb )
		n++;
	if(nb == n)
		return (1);
	else
		return (0);
}

int main(void)
{
	int n = ft_is_prime(37);
	printf("%d\n", n);
	return (0);

}
