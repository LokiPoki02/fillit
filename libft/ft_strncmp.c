#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    for(; s1[i]!= '\0' && s2[i]!= '\0' && i < n - 1; i++)
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    if(s1[i] == s2[i] || n == 0)
    {
        return 0;
    }
    return s1[i]-s2[i];
}