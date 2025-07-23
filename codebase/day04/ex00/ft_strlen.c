#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	unsigned int n;
	n = 0;
	while( *(str+n) != '\0')
		n++;

	return (n);
}

int main(void)
{
	char *str;
	str = "Zan";

	printf("The length of str is %d\n",ft_strlen(str));
	return (0);
}
