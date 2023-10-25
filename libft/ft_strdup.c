#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    int s_len = ft_strlen(s) + 1;
    char* new_str = (char*)malloc(s_len);
    ft_memcpy(new_str, s, s_len);
    return new_str;
}