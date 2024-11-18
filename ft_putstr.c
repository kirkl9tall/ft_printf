#include <unistd.h>

int	ft_putstr(char *str)
{
	int	x;
	int count;
	if (!str)
		{
			write(1,"(null)",6);
			return (6);
		}
	count = 0;
	x = 0;
	while (str[x])
	{
		write(1, &str[x++], 1);
		count++;
	}
	return (count);
}