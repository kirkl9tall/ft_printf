/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:51 by abismail          #+#    #+#             */
/*   Updated: 2024/11/19 10:10:05 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	nega(int number)
{
	int	arr[11];
	int	x;
	int	count;

	x = 0;
	write(1, "-", 1);
	number = -number;
	count = 1;
	if (number > 9)
	{
		while (number != 0)
		{
			arr[x++] = number % 10;
			number = number / 10;
			count++;
		}
	}
	else if (number <= 9)
	{
		ft_putchar(number + 48);
		return (2);
	}
	while (x--)
		ft_putchar(arr[x] + 48);
	return (count);
}

int	ft_putnbr(int number)
{
	int	count;
	int	arr[11];
	int	x;

	count = 0;
	x = 0;
	if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (number < 0)
		return (nega(number));
	if (number > 9)
	{
		while (number != 0)
		{
			arr[x++] = number % 10;
			number = number / 10;
			count++;
		}
	}
	else if (number <= 9)
		return (ft_putchar(number + 48));
	while (x--)
		ft_putchar(arr[x] + 48);
	return (count);
}
/*
int main ()
{
   printf("\n%d\n",ft_putnbr(-595959));
} */