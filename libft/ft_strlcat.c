#include <string.h>
#include "libft.h"

size_t ft_strlcat(char * dest, const char * src, size_t n)
{
    size_t dest_len = ft_strlen(dest);
    size_t i = 0;


    if (n != 0)
    {
        for (; dest_len + i < n - 1 && src[i] != '\0'; i++)
        {
            dest[dest_len + i] = src[i];
        }
        dest[dest_len + i] = '\0';
    }
    if(dest_len < n)
    {
        return ft_strlen(src) + dest_len;
    }
    return ft_strlen(src) + n;
}