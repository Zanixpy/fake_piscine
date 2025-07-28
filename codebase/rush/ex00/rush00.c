#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush(int x, int y)
{
	if(x <= 0 || y <= 0)
		return ;
	int i;
	int j;

	j = 0;
	while(j < y)
	{
		i = 0;
		while(i < x)
		{
			if( (i == 0 && (j == 0 || j == y-1)) ||  
			    (i == x-1 && (j == 0 || j == y-1)))
				ft_putchar('o');
			else if( i == 0 || i == x-1)
				ft_putchar('|');
			else if( j == 0 || j == y-1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		} 
		j++;
		ft_putchar('\n');
	}
}	
