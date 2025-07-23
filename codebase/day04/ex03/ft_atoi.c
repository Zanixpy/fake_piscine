#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	unsigned int minus;
	unsigned int n;
	unsigned int k;
	n = 0;
	minus = 0;
	k = 0;
	while(*(str+n) != '\0')
	{
		if(*(str+n) == '-')
			minus++;
		else if( *(str+n) >= '0' && *(str+n) <= '9')
			k = (k * 10) + (*(str+n) - '0');
		else if( *(str+n) != ' ' && *(str+n) != '+' )
		{
			if( (minus % 2) == 0)
				return (k);
			else
				return (-k);
		}
		n++;
	}
	if ( (minus % 2) == 0)
		return (k);
	else
		return (-k);
}

int main(void)
{
	char *result;
	result = "  --+-12456";
	int atoii;
	atoii = ft_atoi(result);

	printf("That work ? %d\n", atoii);
	return (0);


}
