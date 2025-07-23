#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
	char digit;
	
	if( nb >= 10)
	{
		ft_putnbr( nb / 10);
	}
	else if( nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
		ft_putnbr(nb/10);
	}

	digit = '0' + (nb % 10);
	write(1,&digit,1);
}

int main(void)
{
	int n;
	n = - 42;

	ft_putnbr(n);

	return (0);
}
