#include <stdlib.h>
#include <stdio.h>

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

    result = NULL;
    if (size < 1)
    {
        return (result);
    }
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
        if (i < (size - 1))
        {
            while (*sep != '\0')
            {
                result[result_index] = *sep;
                result_index++;
                sep++;
            }
        }
        i++;
    }
    result[result_index] = '\0';
    return (result);
}

int main()
{
    char str_1[] = "jerry";
    char str_2[] = "jerry";
    char sep[] = " & ";
    char *strs[1];

    strs[0] = str_1;
    strs[1] = str_2;

    char *res = ft_strjoin(2, strs, sep);
    printf("result: %s", res);
    return 0;
}
