void	ft_putnbr(int number)
{
	int	mod;

	if (number == -2147483648)
		write(1, "-2147483648", 11);
	else if (number > 9)
	{
		mod = number % 10 + 48;
		number = number / 10;
		ft_putnbr(number);
		write(1, &mod, 1);
	}
	else if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
		ft_putnbr(number);
	}
	else if (number <= 9)
	{
		number = number + 48;
		write(1, &number, 1);
	}
}