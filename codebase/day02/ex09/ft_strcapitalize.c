#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	unsigned int n;
	n = 0 ; 
	while( *(str+n) != '\0')
	{
		if( *(str+n) >= 48 && *(str+n) <= 59 ||
		    *(str+n) >= 65 && *(str+n) <= 90 ||
		    *(str+n) >= 97 && *(str+n) <= 122)
		{
			if(*(str+n) >= 97 && *(str+n) <= 122)
				*(str+n) = *(str+n) - 32;
			n++;
			while( *(str+n) >= 48 && *(str+n) <= 59 || 
				*(str+n) >= 65 && *(str+n) <= 90 || 
				*(str+n) >= 97 && *(str+n) <= 122)
			{
				if(*(str+n) >= 65  ||  *(str+n) <= 90)
				{
					*(str+n) = *(str+n) - 32;
				}
				n++;
			}
		}
		n++;
	}
	return (str);
}

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Result of : %s\n",ft_strcapitalize(str));
	return (0);
	
}
