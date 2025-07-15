#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
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
		if( *(str+n) < 32  ||  *(str+n)==127)
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
	src = DEL ;

	printf("Contient que des chiffres : %d\n", ft_str_is_printable(src));

	return (0);
}




