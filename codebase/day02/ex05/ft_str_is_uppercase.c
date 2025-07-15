#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
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
		if( *(str+n) < 65  ||  *(str+n) > 90)
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
	src = "ASDF";

	printf("Contient que des chiffres : %d\n", ft_str_is_uppercase(src));

	return (0);
}



