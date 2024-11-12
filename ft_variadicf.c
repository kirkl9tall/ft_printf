#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int s = 0;
    int i = 0;
    int x;

    while  (i < count)
    {
        x = va_arg(args, int);
     //   printf("%d\n",x);
        s += x;
         printf("%d\n",s);
        i++;
    }
    va_end(args);
    return (s);

}

int main ()
{
    printf("sum is : %d \n",sum(5,1,2,6,4,3));
}

