#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *string =(char*)malloc(ft_strlen(s) + 1);
    int i = 0;
    for(; s[i] != '\0'; i++)
    {
        string[i] = f(i, s[i]);
    }
    string[i] = '\0';
    return string;
}