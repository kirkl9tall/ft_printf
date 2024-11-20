/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:54 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 15:18:22 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	x;
	int	count;

	if (!str)
	{
		write(1, "(null)", 6);
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
