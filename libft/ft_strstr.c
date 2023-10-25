#include <stdbool.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    for (int i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0]) 
        {
            bool sub_str_inside = 1;

            for(int j = 1; needle[j] != '\0'; j++)
            {
                if(haystack[i+j] != needle[j])
                {
                    sub_str_inside = 0;
                    break;
                }
            }
            if (sub_str_inside) 
            {
                return (char*)haystack + i; 
            }
        }
    }
    return 0;
}