#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char* char_s = (char*)s;
    for(size_t i = 0; i < n; i++)
    {
        char_s[i] = '\0';
    }
}