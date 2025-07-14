#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int n;
	n=0;
	while( *(str+n) != '\0' )
	{
		write(1,(str+n),1);
		n++;
	}
}

int main(void)
{
	char *str;
	str = "Hello";

	ft_putstr(str);
	return (0);
}
