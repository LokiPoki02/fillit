#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char* ft_substr(const char *source, int start, int length)
{
    if(start > (int)ft_strlen(source))
    {
        start = (int)ft_strlen(source);
    } 
    if((int)ft_strlen(source + start) < length)
    {
        length = (int)ft_strlen(source + start);
    }
    char* ret_string = (char*)malloc(length + 1);
    for(int i = start; source[i] != '\0' && i < (start + length); i++)
    {
        ret_string[i - start] = source[i];
    }
    ret_string[length] = '\0';
    return ret_string;
}