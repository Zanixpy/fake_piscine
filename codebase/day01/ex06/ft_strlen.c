#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int n;
	n=0;
	while( *(str+n) != '\0' )
	{
		n++;
	}

	return (n);
}

int main(void)
{
	char *str;
	str = "Zan";

	printf("la len de str : %d", ft_strlen(str));
	return (0);
}
