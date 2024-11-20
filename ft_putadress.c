/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:37 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 20:33:38 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(unsigned long long n)
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

int	ft_putput(unsigned long long n)
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

int	ft_putadress(void *px)
{
	int	count;

	if (!px)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count += ft_putput((unsigned long long)px);
	return (count);
}
/* 
int	main(void)
{
		char c = '9';
	int i = ft_putadress(&c);
	printf("\n%d\n",i);
	printf("%p\n", &c);
}  */
