#include "libft.h"

char *ft_strcat(char *restrict dest, const char *restrict src)
{
    int dest_size = ft_strlen(dest);
    int i;
    for(i = 0; src[i] != '\0'; i++)
    {
        dest[dest_size + i] = src[i];
    }
    dest[dest_size + i] = '\0';
    return dest;
}