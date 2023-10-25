#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *  ft_itoa ( int value)
{
    bool is_negative = value < 0;
    int i = 0;
    int temp_val = value;
    char *str;
    
    while(temp_val)
    {
        temp_val /= 10;
        i++; 
    }
    if(!value)
    {
        i = 1;
    } 
    str = (char*)malloc(is_negative? i + 2 : i + 1);
    str[i] = '\0';
    if(is_negative)
    {
        str[0] = '-'; 
    }
    while(i-- > 0)
    {
        str[i + is_negative] = '0' + abs(value % 10);
        value /= 10;
    }
    return str;
}