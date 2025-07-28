#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	if(power < 0)
		return (0);
	else if(power == 0)
		return (1);
	int n;
	int result;
	n  = 1;
	result = nb;
	while( n < power)
	{
		result = result * nb;
		n++;
	}

	return (result);
}

int main(void)
{
	int n = ft_iterative_power(5,2);

	printf("%d\n", n);
	return (0);

}
