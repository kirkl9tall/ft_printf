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
int	ft_puthexanbr(unsigned int n)
{
	char	*p;
	char	pfinal[20];
	int		x;
	int		mod;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	x = count(n);
	p = "0123456789ABCDEF";
	pfinal[x] = '\0';
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
 /*
 int	main(void)
{
	ft_puthexanbr(666666);
	printf("\n%X\n", 666666);
 //   printf("10%% \n");
    
}  */