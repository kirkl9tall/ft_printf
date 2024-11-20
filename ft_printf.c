/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:32 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 14:40:29 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	modas(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		len += ft_putunsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		len += ft_puthexnbr(va_arg(ap, unsigned int));
	else if (c == 'X')
		len += ft_puthexanbr(va_arg(ap, unsigned int));
	else if (c == 'p')
		len += ft_putadress(va_arg(ap, void *));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		x;

	len = 0;
	x = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[x])
	{
		if (format[x] == '%' && format[x + 1] == '\0')
			return (-1);
		if (format[x] == '%')
			len += modas(format[++x], ap);
		else
			len += ft_putchar(format[x]);
		x++;
	}
	va_end(ap);
	return (len);
}
/*
#include <stdio.h>

  int main()
{
	int	i;
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;
	int	h;
	int	k;
	int	l;

	i = printf("%d %i %u %s  %c %p     kaka    %X
			%x 10%% ",2147483647,-2147483648, 4294967295, NULL,
			'z',NULL,123 ,89898989);
	printf("\nOriginal printf length: %d\n", i);
	a = ft_printf("%d %i %u %s  %c %p     kaka    %X
			%x 10%% ",2147483647,-2147483648, 4294967295,NULL,
			'z',NULL,123 ,89898989);
	printf("\nft_printf length: %d\n", a);
	printf("\n----------------------------------------\n");
	b = printf("dfdfdfdkaka");
	printf("\nOriginal printf length: %d\n", b);
	c = ft_printf("dfdfdfdkaka");
	printf("\nft_printf length: %d\n", c);
	printf("\n----------------------------------------\n");
	d = printf("           %%      %%            %");
	printf("\nOriginal printf length: %d\n", d);
	e = ft_printf("           %%      %%            %");
	printf("\nft_printf length: %d\n", e);
	printf("\n----------------------------------------\n");
	f = printf("",2147483647,-2147483648, 4294967295, NULL,
			'z',NULL,123 ,89898989);
	printf("\nOriginal printf length: %d\n", f);
	g = ft_printf("",2147483647,-2147483648, 4294967295,NULL,
			'z',NULL,123 ,89898989);
	printf("\nft_printf length: %d\n", g);
	printf("\n----------------------------------------\n");
	h = printf("");
	printf("\nOriginal printf length: %d\n", h);
	int j =ft_printf("");
	printf("\nft_printf length: %d\n", j);
	printf("\n----------------------------------------\n");
	k = printf(NULL);
	printf("\nOriginal printf length: %d\n", k);
	l = ft_printf(NULL);
	printf("\nft_printf length: %d\n", l);
	return (0);
}
 */