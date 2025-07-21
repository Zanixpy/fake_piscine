#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int n;
	n = 0;
	while( (*(s1+n) != '\0') || (*(s2+n) != '\0'))
	{
		if(*(s1+n) != *(s2+n))
		{
			if( *(s1+n) < *(s2+n))
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		n++;
	}
	return (0);

}

int main(void)
{
	char *s1;
	char *s2;
	s1 = "Zan";
	s2 = "Zann";

	printf("Both same ? %d\n", ft_strcmp(s1,s2));
	return (0);
}
