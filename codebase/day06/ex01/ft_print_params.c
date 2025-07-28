#include <unistd.h>

int main(int argc, char **argv)
{
	int n;
	int o;
	if(argc > 1)
	{
		n = 1;
		o = 0;
		while(n < argc)
		{
			while( *(argv[n]+o) != '\0')
			{
				write(1,(argv[n]+o),1);
				o++;
			}
			write(1,"\n",1);
			n++;
			o = 0;
		}
	}
}
