#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>

int	ft_putstr(char *str);
int	ft_putnbr(int number);
int	ft_puthexnbr(unsigned int n);
int	ft_puthexanbr(unsigned int n);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putadress(void *px);
#endif