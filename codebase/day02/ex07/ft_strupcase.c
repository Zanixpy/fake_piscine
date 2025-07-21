#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	unsigned int n;
	n = 0;

	while( *(str+n) != '\0')
	{
		if( *(str+n) >= 97 && *(str+n) <= 122 )
		{
			*(str+n) = *(str+n) - 32;
		}
		n++;
	}

	return (str);
}

int main(void)
{
	char test[4];
	test[0] = 'z';
	test[1] = 'a';
	test[2] = '4';
	char *str;
	str = &test[0];

	printf("En upcase : %s\n", ft_strupcase(str));

	return (0);
}
