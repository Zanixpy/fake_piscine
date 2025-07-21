#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

char *ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int o;
	i = 0;
	o = 0;
	while(*(dest+i) != '\0')
	{
		i++;
		if(*(dest+i) == '\0')
		{
			while( o < n && *(src+o) != '\0' )
			{
				*(dest+i+o) = *(src+o);
				o++;
			}
			if(o == n)
				*(dest+i+o+1) = '\0';
			i = i + o;
		}
	}
	return (dest);
}

int main(void)
{
	char dest[20] = "Bonjour ";
	char src[] = "le monde !";
	char *p = &dest[0];
	ft_strncat(dest,src,4);

	unsigned int n;
	n=0;
	while(*(p+n) != '\0')
	{
		printf("%c",*(p+n));
		n++;
	}


	return (0);


}
