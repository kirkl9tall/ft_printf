#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

static int modas(char c, va_list ap)
{
    int len = 0;

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
    return len;
}

int ft_printf(const char *format, ...)
{
    va_list ap;
    int len = 0;
    int x = 0;

    if (!format)
        return (-1);
    va_start(ap, format);

    while (format[x])
    {
        if (format[x] == '%' && format[x + 1] != '\0')
            len += modas(format[++x],ap);

        else
            len += ft_putchar(format[x]);

        x++;
    }

    va_end(ap);
    return len;
}

 int main()
{
    int i = printf("%d %i %u %s  %c %p     kaka    %X %x 10%% ",2147483647,-2147483648, 4294967295, NULL, 'z',NULL, 123 ,89898989);
    printf("\nOriginal printf length: %d\n", i);

    int a = ft_printf("%d %i %u %s  %c %p     kaka    %X %x 10%% ",2147483647,-2147483648, 4294967295,NULL, 'z',NULL, 123 ,89898989);
    printf("\nft_printf length: %d\n", a);

    return 0;
} 
