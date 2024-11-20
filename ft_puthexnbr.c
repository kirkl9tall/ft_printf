/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:44:33 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 15:58:31 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	counter(unsigned int n)
{
	int	x;

	x = 0;
	while (n != 0)
	{
		n = n / 16;
		x++;
	}
	return (x);
}

int	upper(unsigned int n)
{
	char	*p;
	char	pfinal[20];
	int		y;
	int		mod;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	y = counter(n);
	p = "0123456789ABCDEF";
	pfinal[y] = '\0';
	while (n != 0)
	{
		mod = n % 16;
		n = n / 16;
		pfinal[y - 1] = p[mod];
		y--;
	}
	while (pfinal[y])
		write(1, &pfinal[y++], 1);
	return (y);
}

int	ft_puthexnbr(unsigned int n, char c)
{
	char	*p;
	char	pfinal[20];
	int		x;
	int		mod;

	if (n == 0 || c == 'X')
		return (upper(n));
	x = counter(n);
	p = "0123456789abcdef";
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
	printf("%d",ft_puthexnbr(1));
	printf("\n%x\n", 1);
 //   printf("10%% \n");

} */
