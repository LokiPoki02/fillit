#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    for (; s[i] != '\0'; i++)
    {
        if (s[i] == (char)c) 
        {
            return (char*)s + i;
        }
    }
    if(s[i] == (char)c)
    {
        return (char*)s + i;
    }
    return 0;
}