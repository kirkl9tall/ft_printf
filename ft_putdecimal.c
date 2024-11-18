#include <stdio.h>
#include "printf.h"
int	ft_putunsigned(unsigned int n)
{
	int count;
	int arr[11];
	int x;

	count = 0;
	x = 0;
	if (n > 9)
	{
		while  (n != 0)
		{
			arr[x++] = n % 10 ;
			n = n / 10;
			count++;
		}
		  while (x--)
			ft_putchar(arr[x]+48);  
	}
	else if (n <= 9)
		return (ft_putchar(n + 48));
	return (count);
}
/* 
int main()
{
	int  a  = -152656;
	printf("%u\n",a);
	printf("\n%d\n",ft_putunsigned(a));
}  */
