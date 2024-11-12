void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		write(1, &str[x++], 1);
}