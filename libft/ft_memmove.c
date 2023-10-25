#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char* temp = (char*)malloc(n);
    char* char_src =(char*)src;
    char* char_dest =(char*)dest;
    for(size_t i = 0; i < n; i++)
    {
        temp[i] = char_src[i];
    }
    for(size_t j = 0; j < n; j++)
    {
        char_dest[j] = temp[j];
    }
    free(temp);
    return char_dest;
}