#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;
	n = 0;
	i = 0;
	while( (n+i) < size-1 )
	{
		if(*(dest+n) == '\0')
		{
			while( (n+i) < size-2 )
			{
				*(dest+n+i) = *(src+i);
				i++;
			}
			if(*(src+i) != '\0')
			{
				*(dest+n+i)= '\0';
				while(*(src+i) != '\0')
					i++;
			}
			return (n+i);
		}
		n++;
	}
}


int main(void) {
    char dest[10] = "Hello";
    char *src = "World";
    size_t result = ft_strlcat(dest, src, 10);
    printf("Resultat : %s\n", dest);    
    printf("Longueur theorique : %d\n", result);
    return 0;
}

