/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:37 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 17:07:00 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

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
	int		index;
	int		mod;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	index = count(n);
	p = "0123456789abcdef";
	pfinal[index] = '\0'; // Null-terminate the string
	while (n != 0)
	{
		mod = n % 16;
		n = n / 16;
		pfinal[--index] = p[mod]; // Fill from the end
	}
	write(1, pfinal, count(n)); // Write the entire string
	return (count(n));
}

int	ft_putstr(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putadress(void *px)
{
	int	count = 0; // Initialize count

	if (!px)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x"); // Print the "0x" prefix
	count += ft_putput((unsigned long long)px); // Print the address
	return (count);
}

/*
int	main(void)
{
		char c = '9';
	int i = putadress(&c);
	printf("\n%d\n",i);
	printf("%p\n", &c);
} */
