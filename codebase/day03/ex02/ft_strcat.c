#include <stdio.h>

char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src)
{
	unsigned int n;
	unsigned int i;
	n = 0;
	i = 0;

	while( *(dest+n) != '\0')
	{
		n++;
		if( *(dest+n) == '\0')
		{
			while(*(src+i) != '\0')
			{
				*(dest+n+i) = *(src+i);
				i++;
			}
			n = n+i;
		}
	} 

	return (dest);
}

int main(void)
{
	char dest[10] = "Zan ";
	char src[3] = "Ok";
	char *p = &dest[0];
	
	ft_strcat(dest,src);
	int n = 0;
	while(*(p+n) != '\0')
	{
		printf("%c",*(p+n));
		n++;
	}

	printf("%s\n",dest);
	return (0);
}
