/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:43 by abismail          #+#    #+#             */
/*   Updated: 2024/11/19 11:52:24 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	count;
	int	arr[11];
	int	x;

	count = 0;
	x = 0;
	if (n > 9)
	{
		while (n != 0)
		{
			arr[x++] = n % 10;
			n = n / 10;
			count++;
		}
		while (x--)
			ft_putchar(arr[x] + 48);
	}
	else if (n <= 9)
		return (ft_putchar(n + 48));
	return (count);
}
/*
int	main(void)
{
	int  a  = -152656;
	printf("%u\n",a);
	printf("\n%d\n",ft_putunsigned(a));
}  */
