#include "fillit.h"

int get_figure_count(char *file_path);
void write_figure(char **figures, int fd);
void set_letters(char ***figures, int figure_count);
void write_error(char * error_message);
int main(int argc, char **argv)
{
    int figure_count;
    int fd;
    char ***figures;
    char *file_path = argv[1];
    if(argc != 2)
    {
        write_error("Missing file\n");
    }
    figure_count = get_figure_count(file_path);
    figures = (char***)malloc(sizeof(char**) * figure_count);
    fd = open(file_path, O_RDONLY);
    for(int i = 0; i < figure_count; i++)
    {
        figures[i] = (char**)malloc(sizeof(char*) * 4);
        printf("I: %d\n",i);
        write_figure(figures[i], fd);
    }
    close(fd);
    set_letters(figures, figure_count);
    for(int i = 0; i < figure_count; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            printf("%s", figures[i][j]);
        }
        printf("\n");
    }

}

void write_error(char * error_message)
{
    
    write(1, error_message, ft_strlen(error_message) + 1);
    exit(1);
}

void set_letters(char ***figures, int figure_count)
{
    for(int i = 0; i < figure_count; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                if(figures[i][j][k] == '#') 
                {
                    figures[i][j][k] = 'A' + i;
                }
            }
        }
    }
}

void write_figure(char **figures, int fd)
{
    char * temp_str;
    int temp_str_len;
    for(int i = 0; i < 4; i++)
    {
        temp_str = get_next_line(fd);
        figures[i] = temp_str; 
        temp_str_len = ft_strlen(temp_str);
        temp_str = ft_strtrim(temp_str, "\n");
        if (ft_strlen(temp_str) != 4)
        {
            write_error("Invalid lines length\n");
        }
        
    }
    
    temp_str = get_next_line(fd);
    if (temp_str == NULL && temp_str_len == 5)
    {
        write_error("Empty line in the end of file\n");
    }
    if(temp_str && ft_strcmp(temp_str,"\n"))
    {
        //printf("%d\n",temp_str[0]);
        write_error("Invalid lines count\n");
    }
    printf("before\n");

}

int get_figure_count(char *file_path)
{
    int figure_count = 0;
    char *line;
    int fd;
    fd = open(file_path,O_RDONLY);
    line = get_next_line(fd);
    while(line)
    {
        if(!ft_strcmp(line, "\n")) 
        {
            figure_count++;
            line = get_next_line(fd);
            printf("Line:%s\n",line);
            if(line == NULL)
            {
                write_error("Extra line break\n");
            }
        }
        else
        {
            line = get_next_line(fd);
        }
    }
    figure_count++;
    close(fd);
    return figure_count;
}

