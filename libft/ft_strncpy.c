#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
    size_t i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    if(i != n)
    {
        dest[i] = '\0';
    }
    return dest;
}