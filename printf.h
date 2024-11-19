/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:12:28 by abismail          #+#    #+#             */
/*   Updated: 2024/11/19 10:12:29 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putnbr(int number);
int	ft_puthexnbr(unsigned int n);
int	ft_puthexanbr(unsigned int n);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putadress(void *px);
#endif
