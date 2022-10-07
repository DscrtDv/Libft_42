int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    return ((ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}

