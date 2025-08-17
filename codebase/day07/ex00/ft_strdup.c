#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char 	*ft_strdup(char *src)
{
	int n;
	char *tmp;
	
	n = 0;
	while( *(src+n) != '\0')
		n++;
	tmp = malloc(n+1);
	n = 0;
	while( *(src+n) != '\0')
	{
		*(tmp+n) = *(src+n);
		n++;
	}
	*(tmp+n) = '\0';

	return (tmp);
}

int main(void)
{
	char *str = "Salut";
	char *copie = ft_strdup(str);
	int n = 0;

	while( *(copie+n) != '\0')
	{
		printf("%c",*(copie+n));
		n++;

	}
	free(copie);
	return (0);



}
