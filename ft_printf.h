/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:12:28 by abismail          #+#    #+#             */
/*   Updated: 2024/11/20 15:35:28 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putnbr(int number);
int	ft_puthexnbr(unsigned int n, char c);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putadress(void *px);
#endif
