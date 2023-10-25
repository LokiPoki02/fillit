#include <string.h>
#include "libft.h"

char *ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
    int dest_size = ft_strlen(dest);
    size_t i;
    for(i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[dest_size + i] = src[i];
    }
    return dest;
}