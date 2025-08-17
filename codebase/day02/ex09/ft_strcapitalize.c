#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	alnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	is_word;
	int		n;

	n = 0;
	is_word = 'n';
	while (*(str + n) != '\0')
	{
		if (alnum(*(str + n)) > 0)
			{
			if (is_word == 'n')
			{
				if(alnum(*(str + n)) == 1)
					*(str + n) = *(str + n) - 32;
				else
					is_word = 'y';
			}
		}
		else
		{
			is_word = 'n';
		}
		n++;
	}
	return (str);
}

int main(void)
{
	char str[] = "hello, how are u ? 42words forty-two; fifty+and+one";
	printf("Result of : %s\n",ft_strcapitalize(str));
	return (0);
	
}
