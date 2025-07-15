#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int n;
	int length;
	n = 0;
	length = 0;

	while ( *(str+length) != '\0')
	{
		length++;
	}
	if(length == 0)
		return (1);

	while( *(str+n) != '\0')
	{
		if( *(str+n) < 48  ||  *(str+n) > 57)
		{
			return (0);
		}
		n++;
	}

	return (1);

}

int main(void)
{
	char *src;
	src = "1Sf2";

	printf("Contient que des chiffres : %d\n", ft_str_is_numeric(src));

	return (0);
}

