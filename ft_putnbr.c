#include <stdio.h>
#include <unistd.h>
int	ft_putchar(char c);
int	ft_putstr(char *str);



int nega(int number)
{
	int arr[11];
	int x;
	int count;

	x = 0;
	write(1, "-", 1);
	number = -number;
	count = 1;
	if (number > 9)
	{
		while  (number != 0)
		{
			arr[x++] = number % 10 ;
			number = number / 10;
			count++;
		}
		while (x--)
			printf("%d", arr[x]);
	}
	else if (number <= 9)
	{
		ft_putchar(number + 48);
		return (2);
	}
	return (count);
}

int	ft_putnbr(int number)
{
	int	mod;
	int count;
	int arr[11];
	int x;

	count = 0;
	x = 0;
	if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (number < 0)
		return (nega(number));
	if (number > 9)
	{
		while  (number != 0)
		{
			arr[x++] = number % 10 ;
			number = number / 10;
			count++;
		}
		while (x--)
			printf("%d", arr[x]);
	}
	else if (number <= 9)
		return (ft_putchar(number + 48));
	return (count);
}

int main ()
{
	printf("\n%d\n",ft_putnbr(-2147483648));
}