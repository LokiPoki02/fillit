#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char* char_s1 = (char*)s1;
    char* char_s2 = (char*)s2;
    for(size_t i = 0; i < n; i++)
    {
        if (char_s1[i] != char_s2[i])
        {
            return char_s2[i] - char_s1[i];
        }
    }
    return 0;
}
