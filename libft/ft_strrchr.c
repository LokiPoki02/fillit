#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len = ft_strlen(s);
    for (; len >= 0; len--)
    {
        if (s[len] == (char)c) 
        {
            return (char*)s + len;
        }
    }
    return NULL;
}