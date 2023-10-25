#include <unistd.h>
#include "libft.h"
#include <stdbool.h>

void    ft_putnbr_fd(int num, int fd)
{
    char *str = ft_itoa(num);
    ft_putstr_fd(str,fd);
    free(str);
}