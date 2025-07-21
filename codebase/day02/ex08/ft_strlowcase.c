#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	unsigned int n;
	n = 0;

	while( *(str+n) != '\0')
	{
		if( *(str+n) >= 65 && *(str+n) <= 90 )
		{
			*(str+n) = *(str+n) + 32;
		}
		n++;
	}

	return (str);
}

int main(void)
{
	char test[4];
	test[0] = 'Z';
	test[1] = 'J';
	test[2] = 'M';
	char *str;
	str = &test[0];

	printf("En lowcase : %s\n", ft_strlowcase(str));

	return (0);
}

