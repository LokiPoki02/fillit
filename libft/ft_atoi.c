#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int ret_num = 0;
    int sign = 0;
    int c = 0;
    while(nptr[c] <= 32)
    {
        c++;
    }
    if(nptr[c] == 43)
    {
        c++;
    }
    else if(nptr[c] == 45)
    {
        sign = -1;
        c++;
    }
    for(;nptr[c] != '\0'; c++)
    {
        if(nptr[c] >= '0' && nptr[c] <= '9')
        {
            ret_num *= 10;
            ret_num += nptr[c] - '0';
        }
        else 
        {
            break;
        }
    }
    return  sign == -1 ? ret_num * sign : ret_num;
}