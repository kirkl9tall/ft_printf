#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int sum(int count, ...)
{   
    int total;
    int i;
    va_list ap;
    va_start(ap,count);

    total = 1;
    i = 0;
    while (i < count)
    {
        total *= va_arg(ap,int);
        i++;
    }
    return (total);

}

/* 
int main ()
{

    fx();
}

 */