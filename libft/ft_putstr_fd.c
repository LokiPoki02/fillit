#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        ft_putchar_fd(s[i],fd);
    }
}