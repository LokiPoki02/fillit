#include "libft.h"

char* ft_strjoin(const char *str1, const char *str2)
{
    int str1_len = ft_strlen(str1);
    char *dest = (char*)malloc(str1_len + ft_strlen(str2) + 1);
    int i = 0;
    for(; str1[i] != '\0'; i++)
    {
        dest[i] = str1[i];
    }
    for(; str2[i - str1_len] != '\0'; i++)
    {
        dest[i] = str2[i - str1_len];
    }
    dest[i] = '\0';
    return dest;
}