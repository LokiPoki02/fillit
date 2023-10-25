#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char* char_s = (unsigned char*)s;
    unsigned char char_c = (unsigned char)c;
    for(size_t i = 0; i < n; i++)
    {
        if (char_s[i] == char_c) 
        {
            return (char_s+i);
        } 
    }
    return 0;
}