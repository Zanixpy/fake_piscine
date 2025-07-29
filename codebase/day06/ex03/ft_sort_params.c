#include <unistd.h>
#include <stdio.h>


void	ft_print_params(int argc, char **argv);

int	ft_strcmp(char *s1, char *s2);

void	ft_sort_params(char **str, int loop);


int main(int argc, char **argv)
{
	if( argc > 1 )
	{
		ft_sort_params(argv, argc);
		ft_print_params(argc,argv);
	}
	
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	n = 0;
	
	while( i < argc)
	{
		while( *(argv[i]+n) != '\0')
		{
			write(1,(argv[i]+n),1);
			n++;
		}
		write(1,"\n",1);
		i++;
		n = 0;
	}

}

int	ft_strcmp(char *s1, char *s2)
{
	int n;
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

void	ft_sort_params(char **str, int loop)
{
	int i;
	int j;
	char *tmp;

	i = 1;
	j = i+1;

	while( i < loop)
	{
		while( j < loop)
		{
			if( ft_strcmp(str[i], str[j]) == 1)
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

