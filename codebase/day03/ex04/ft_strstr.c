#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if(*to_find == '\0')
		return (str);
	unsigned int n;
	unsigned int i;
	unsigned int o;
	n = 0;
	i = 0;
	o = 0;
	while( *(str+n) != '\0')
	{
		i = n;
		while( (*(str+i) == *(to_find+o)) && *(to_find+o) != '\0')
		{
			i++;
			o++;
		}
		if(*(to_find+o) == '\0')
			return (str+n);
		else
			o = 0;
		n++;
	}
	return (NULL);

}

int main(void)
{
	char *texte = "Bonjour le monde";
	char *mot = "le";
	
	char *resultat = ft_strstr(texte,mot);

	if(resultat != NULL)
	{
		printf("Mot a la position : %ld\n", resultat - texte);
	}
	return (0);
}
