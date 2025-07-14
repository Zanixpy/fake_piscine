#include <stdio.h>


void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main(void)
{
	int a;
	int b;
	a = 56;
	b = 21;

	int *pA;
	int *pB;
	pA = &a;
	pB = &b;
	printf("a : %d, b : %d\n",a,b);
	ft_swap(pA,pB);
	printf("a : %d, b : %d\n",a,b );

	return (0);
}
