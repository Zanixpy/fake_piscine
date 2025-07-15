#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int length;
	length = 0;
	i = 0 ;

	while (*(src+length) != '\0')
	{
		length++;	
	}
	if(length < n)
	{
		 while( i < n)
        	{                                                                                                                                            *(dest+i) = *(src+i);
                	if( *(src+i) == '\0')
                	{
                        	while( i < n )
                        	{
                                	i++;
                                	*(dest+i) = '\0';
                        	}
                	}              
			i++;                                                                                                                         }  
	}else
	{
		 while( i < n)		 
		 {                                                                                                                                            *(dest+i) = *(src+i);
			 i++;
		 }
	}

	return dest;
}

int main(void)
{

	char buf[5];
	char *src;
	src = "Supracell";
	
	ft_strncpy(buf,src,3);

	printf("Chaine C : %s\n", buf);

	return (0);
	



}
