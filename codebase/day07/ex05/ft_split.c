#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	is_in(char c, char *set)
{
	int	n;

	n = 0;
	while (*(set + n) != '\0')
	{
		if (*(set + n) == c)
			return (1);
		n++;
	}
	return (0);
}

int	cwords(char *str, char *set)
{
	char	is_w;
	int		n;
	int		c;
	int		i;

	n = 0;
	c = 0;
	is_w = 'n';
	i = 0;
	while (*(str + n) != '\0')
	{
		if (is_in(*(str + n), set) == 0)
		{
			if (is_w == 'n')
			{
				is_w = 'y';
				c++;
			}
		}
		else if (is_in(*(str + n), set) == 1 && is_w == 'y')
			is_w = 'n';
		n++;
	}
	return (c);
}

char 	*ft_strdup(char *src, int n, char **tab, int c)
{
	int i;

	*tab[c] = malloc(n+1);
	i = 0;
	while( *(src+i) != '\0')
	{
		*(tab[c]+i) = *(src+i);
		i++;
	}
	*(tab[c]+i) = '\0';

	return (tab[c]);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	is_w;
	int			n;
	int			c;
	int			i;

	tab = malloc(cwords(str, charset) + 1);
	n = 0;
	c = 0;
	is_w = 'n';
	i = 0;
	while (c < cwords(str, charset) && *(str + n) != '\0')
	{
		if (is_in(*(str + n), charset) == 0 && is_w == 'n')
		{
			is_w = 'y';
			c++;
		}
		else if (is_in(*(str + n), charset) == 1 && is_w == 'y')
		{
			is_w = 'n';
			tab[c - 1] = malloc(n - i + 1);
			i = n;
		}
		n++;
	}
	tab[c] = NULL;
	return (tab);
}



int main(void)
{


}
