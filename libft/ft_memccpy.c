#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char* char_dest = (char*)dest;
    char* char_src = (char*)src;
    size_t i = 0;

    while(char_src[i] != c && i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return dest;
}