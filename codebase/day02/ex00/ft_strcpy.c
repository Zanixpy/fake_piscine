#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int n;
	n = 0;
	while ( *(src+n) != '\0')
	{
		*(dest+n)= *(src+n);
		n++;
	}
	*(dest+n)= '\0';

	return dest;
}

int  main(void)
{
	char *src;
	char dest[10];
	char *p = dest;
	char *test;
	test= "Zan";
	src = "Hello";

	printf("Return of ft_strcpy : %s\n",ft_strcpy(dest,src)); 

	return (0);
}
