#include <stdio.h>
#include <unistd.h>

static int   count (unsigned  int n)
{
	int x;
	
	x = 0;
	while (n != 0)
	{
		n = n / 16;
		x++;
	}
	return (x);
}
int	puthexnbr(unsigned int n)
{
	char	*p;
	char	pfinal[20];
	int		x;
	int		mod;

	if (n == 0)
		write(1, "0", 1);
	x = count(n);
	p = "0123456789ABCDEF";
	while (n != 0)
	{
		mod = n % 16;
		n = n / 16;
		pfinal[x - 1] = p[mod];
		x--;
	}
	while (pfinal[x])
		write(1, &pfinal[x++], 1);
	return (x);
}
int	main(void)
{
	printf ("%d\n",puthexnbr(645645));
	printf("\n%X\n", 645645);
 //   printf("10%% \n");
    
}