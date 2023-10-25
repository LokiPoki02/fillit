#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    int size_of_calloc = (int)nmemb * (int)size;
    if ((nmemb != 0 && size_of_calloc / nmemb != size)) {
        return 0;
    }
    void *pointer = malloc(size_of_calloc);
    ft_memset(pointer, 0, size_of_calloc);
    return pointer;
}