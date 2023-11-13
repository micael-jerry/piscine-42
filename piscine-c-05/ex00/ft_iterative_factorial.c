int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    while (i <= nb)
    {
        res = res * i;
        i++;
    }
    return (res);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 12;
    int res = ft_iterative_factorial(nb);
    printf("%d", res);
    return 0;
}
*/