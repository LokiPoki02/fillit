#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#define BUFSIZE 42

char*	get_next_line(int fd)
{
	static char*	line;
	char*	strr;
    char* ret_line;
	int	amount_of_readed = -1;
	int	index = -1;
	int	line_break;

	if (read(fd, line, 0) == -1)
	{
		return (NULL);
	}
	if (line)
	{
		index = get_line_break(line);
	}
	if (index != -1)
	{
		char*	next_line_temp = (char*)ft_alloc(sizeof(char) * (ftstrlen(line) + 1));
		next_line_temp = ftstrcpy(line, next_line_temp);
		free(line);
		line = (char*)ft_alloc(sizeof(char) * ftstrlen(next_line_temp + index));
		line = ftstrcpy(next_line_temp + index + 1, line);
		next_line_temp[index + 1] = '\0';
		return (next_line_temp);
	}
   if(!line)
   {
      line = (char*)ft_alloc(sizeof(char));
   }
	while (amount_of_readed != 0)
	{
		strr = (char*)malloc(sizeof (char) * (BUFSIZE + 1));
		amount_of_readed = read(fd, strr, BUFSIZE);
		strr[amount_of_readed] = '\0';
		line_break = get_line_break(strr);
		if (line_break >= 0) 
		{
			ret_line = (char*)malloc(sizeof(char) * (ftstrlen(line) + 1));
         	ftstrcpy(line, ret_line);
			free(line);
			line = (char *)ft_alloc(sizeof(char) * (ftstrlen(strr + line_break)));
			ftstrcpy(strr + line_break + 1, line);
			strr[line_break + 1] = '\0';
			ret_line = ftstrcat(ret_line, strr);
			return (ret_line);
		}
		line = ftstrcat(line, strr);
	}
	if (!ftstrlen(line))
	{
		return (NULL);
	}
	ret_line = (char*)malloc(sizeof(char) * (ftstrlen(line) + 1));
	ftstrcpy(line, ret_line);
	line[0] = '\0';
	return (ret_line);
}
