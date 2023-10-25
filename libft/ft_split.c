#include "libft.h"

char** ft_split(char* a_str, const char a_delim)
{
    int words_count = 0;
    int i = 0;
    while(a_str[i] != '\0')
    { 
        while(a_str[i] == a_delim)
        {
            i++;
        }
        if(a_str[i] == '\0')
        {
            break;
        }
        while(a_str[i] != a_delim && a_str[i] != '\0')
        {
            i++;
        }
        words_count++;
    }
    char **ret_array = (char**)malloc(sizeof(char*) * (words_count + 1));
    words_count = 0;
    for(int i = 0; a_str[i] != '\0'; i++)
    {
        if(a_str[i] != a_delim)
        {
            char* ret_pointer = ft_strchr(a_str + i, a_delim);
            if(ret_pointer == NULL || *ret_pointer == '\0')//|| ret_pointer - a_str ==(long int)ft_strlen(a_str + i)
            {
                ret_array[words_count] = ft_substr(a_str, i, ft_strlen(a_str + i)); 
                i += ft_strlen(a_str + i) - 1;
            }
            else
            {
                ret_array[words_count] = ft_substr(a_str, i, ret_pointer - a_str - i);
                i += ret_pointer - a_str - i;
            }
            words_count++;
        }
    }
    ret_array[words_count] = NULL;
    return ret_array;
}