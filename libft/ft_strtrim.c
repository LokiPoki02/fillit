#include "libft.h"
#include <stdbool.h>

char* ft_strtrim(const char *str, const char *exclude)
{
    if(!str || !exclude)
    {
        return 0;
    }
    size_t len;
    size_t i = 0;
    while(str[i] != '\0' && ft_strchr(exclude, str[i]) != 0)
    {
        i++;
    }
    len = ft_strlen(str + i);
    if(len != 0)
    {
        while(str[i + len - 1] && ft_strchr(exclude, str[len + i - 1]) != 0)
        {
            len--;
        } 
    }
    return ft_substr(str, i, len);
}