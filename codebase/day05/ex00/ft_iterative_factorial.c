#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	if( nb <= 0)
		return (0);
	unsigned int result;
	result = nb;
	while( nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}

int main(void)
{
	unsigned int n;
	n = ft_iterative_factorial(5);

	printf("Facto de 5 : %d\n", n);
	return (0);

}
