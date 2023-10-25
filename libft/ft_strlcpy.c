#include <string.h>
#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i = 0;
    if(dstsize != 0)
    {
        for(; i < dstsize - 1 && src[i] != '\0'; i++)
        {
            dst[i] = src[i];
        }
        dst[i] = '\0';
    }
    return ft_strlen(src);
}