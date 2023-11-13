int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    result = nb;
    i = 1;
    while (i < power)
    {
        result *= nb;
        i++;
    }
    return (result);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 1;
    int power = 0;
    int res = ft_iterative_power(nb, power);
    printf("%d", res);
    return 0;
}
*/