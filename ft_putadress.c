#include <stdio.h>
#include <unistd.h>

 int	putadress(void *px)
{
	char	*p;
	char	pfinal[20] = "0x";
	int		x;
	int		mod;
	unsigned int		h, j;
	int count;

	if (p == NULL)
		write(1, "(nil)", 5);
	x = 0;
	h = px;
	j = px;
	p = "0123456789abcdef";
	while (h != 0)
	{
		h = h / 16;
		x++;
	}
	while (j != 0)
	{
		mod = j % 16;
		j = j / 16;
		pfinal[x + 1] = p[mod];
		x--;
	}
	while (pfinal[x])
		write(1, &pfinal[x++], 1);
	return (x);
} 
int	main(void)
{
	 char c = '9';
	int i = putadress(&c);
	printf("\n");
	printf("%p", &c); 
}