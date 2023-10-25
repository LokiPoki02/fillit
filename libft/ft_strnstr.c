#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

char *ft_strnstr(const char *big , const char *little, size_t len)
{
    if(little[0] == '\0')
    {
        return (char*)big;
    }
    size_t little_len = 0;
    while (little[little_len] != '\0')
    {
        little_len++;
    }
    for (size_t i = 0; big[i] != '\0' && i + little_len <= len; i++)
    {
        if (big[i] == little[0]) 
        {
            bool sub_str_inside = 1;
            for(int j = 1; little[j] != '\0' ; j++)
            {
                if(big[i+j] != little[j])
                {
                    sub_str_inside = 0;
                    break;
                }
            }
            if (sub_str_inside) 
            {
                return (char*)big + i; 
            }
        }
    }
    return 0;
}