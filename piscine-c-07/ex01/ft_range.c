#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *result;
    int i;

    result = NULL;
    if (min >= max)
    {
        return result;
    }
    i = 0;
    result = malloc(sizeof(int) * (max - min) + sizeof('\0'));
    while ((i + min) < max)
    {
        result[i] = i + min;
        i++;
    }
    result[i] = '\0';
    return (result);
}

/*
#include <stdio.h>
int main(void)
{
    int *res = ft_range(20,30);
    while (*res != '\0')
    {
        printf("%d\n", *res);
        res++;
    }
    return 0;
}
*/