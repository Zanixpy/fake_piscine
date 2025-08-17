#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	if (size < 0)
		return (NULL);
	char *str;
	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	int n;
	int l;
	int o;

	n = 0;
	l = 0;
	o = 0;
	while(n < size)
	{
		while(*(strs[n]+l) != '\0')
		{
			l++;
		}
		o = o + l;
		l = 0;
		n++;
	}
	while(*(sep+l) != '\0')
	{
		l++;
	}
	o = o + l*(size-1);
	str = malloc(o+1);
	l = 0;
	n = 0;
	while(


}
