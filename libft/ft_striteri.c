void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        f(i, s + i);
    }
}