#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    int i;
    char
        *copy;

    i = 0;
    copy = malloc(sizeof(char) * ft_strlen(src) + sizeof('\0'));
    if (!(copy))
        return (NULL);
    while (src[i] != '\0')
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

t_stock_str create_stock_str(int size, char *str, char *copy)
{
    t_stock_str temp;

    temp.size = size;
    temp.str = str;
    temp.copy = copy;

    return (temp);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *result;

    result = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        result[i] = create_stock_str(
            ft_strlen(av[i]), av[i], ft_strdup(av[i])
        );
        i++;
    }
    result[i] = create_stock_str(0, 0, 0);
    return (result);
}

int main()
{
    char str_1[] = "test1";
    char str_2[] = "test2";
    char str_3[] = "test3";
    char *strs[3];

    strs[0] = str_1;
    strs[1] = str_2;
    strs[2] = str_3;

    t_stock_str *res = ft_strs_to_tab(3, strs);
    free(res);
    return (0);
}