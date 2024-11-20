/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:32 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 15:53:36 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	modas(char c, va_list ap)
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
	else if (c == 'x' || c == 'X')
		len += ft_puthexnbr(va_arg(ap, unsigned int), c);
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
