#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char* char_dest = (char*)dest;
    char* char_src = (char*)src;
    for(size_t i = 0; i < n; i++)
    {
        char_dest[i] = char_src[i];
    }
    return dest;
}