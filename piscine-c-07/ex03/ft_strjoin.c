#include <stdlib.h>

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

int ft_strjoin_len(int size, char **strs, char *sep)
{
    int i;
    int acc;
    int sep_len;

    i = 0;
    acc = 0;
    sep_len = ft_strlen(sep);
    while (i < size)
    {
        acc = acc + ft_strlen(strs[i]);
        if (i < (size - 1))
        {
            acc = acc + sep_len;
        }
        i++;
    }
    return (acc);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int result_index;
    int result_len;
    char *result;

    i = 0;
    result_index = 0;
    result_len = ft_strjoin_len(size, strs, sep);
    result = malloc(sizeof(char) * result_len + sizeof('\0'));
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            result[result_index] = strs[i][j];
            result_index++;
            j++;
        }
        i++;
    }
    result[result_index] = '\0';
    return (result);
}